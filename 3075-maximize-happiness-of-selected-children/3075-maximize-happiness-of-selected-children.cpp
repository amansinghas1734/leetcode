class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans=0;
        sort(happiness.rbegin(),happiness.rend());
        int x=0;
        while(x<k){
            if(x>=happiness[x]){
                break;
            }
            ans+=(happiness[x]-x);
            x++;
        }
        return ans;
    }
};