class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=0;
        int i=0;
        while(i<prices.size()){
            int j=i+1;
            while(j<prices.size()&&prices[j-1]-prices[j]==1){
                j++;
            }
            long long x=j-i;
            ans+=(x*(x+1)/2);
            i=j;
        }
        return ans;
    }
};