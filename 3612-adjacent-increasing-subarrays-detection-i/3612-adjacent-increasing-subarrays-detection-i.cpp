class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                dp[i]+=dp[i-1];
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<dp[i]<<" ";
        // }
        for(int i=k-1;i<n-k;i++){
            if(dp[i]-dp[i-k+1]==k-1&&dp[i+k]-dp[i+1]==k-1){
                return true;;
            }
        }
        return 0;
    }
};