class Solution {
public:
    long long maxSubarrays(int n, vector<vector<int>>& conflictingPairs) {
        vector<vector<int>> conflictingPoints(n+1);
        for(auto p:conflictingPairs){
            conflictingPoints[max(p[0],p[1])].push_back(min(p[0],p[1]));
        }
        long long valid=0;
        vector<long long> extra(n+1,0);
        int ma=0,sma=0;
        for(int i=1;i<=n;i++){
            for(int j:conflictingPoints[i]){
                if(j>=ma){ 
                    sma=ma;
                    ma=j;
                }
                else if(j>sma){
                    sma=j;
                }
            }
            valid+=i-ma;
            extra[ma]+=ma-sma;
        }
        return valid+*max_element(extra.begin(),extra.end());

    }
};