class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=1;
        long long cSum=nums[0];
        int ans=1;
        while(j<nums.size()){
            cSum+=nums[j];
            long long tSum=(long long)nums[j]*(j-i+1);
            while(i<=j&&tSum-cSum>k){
                cSum-=nums[i];
                i++;
                tSum=(long long)nums[j]*(j-i+1);
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};