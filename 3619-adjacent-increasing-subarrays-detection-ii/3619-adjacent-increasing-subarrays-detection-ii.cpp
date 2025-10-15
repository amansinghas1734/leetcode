class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                dp[i]+=dp[i-1];
            }
        }
        int ans=1;
        for(int i=n-1;i>=0;i--){
            ans=max(ans,max(dp[i]/2,min(dp[i],i-dp[i]>=0?dp[i-dp[i]]:0)));
        }
        return ans;
    }
};