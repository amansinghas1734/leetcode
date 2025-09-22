class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int x:nums){
            m[x]++;
        }
        int mf=0;
        for(auto x:m){
            mf=max(mf,x.second);
        }
        int p=0;
        for(auto x:m){
            if(x.second==mf){
                p++;
            }
        }
        return p*mf;
    }
};