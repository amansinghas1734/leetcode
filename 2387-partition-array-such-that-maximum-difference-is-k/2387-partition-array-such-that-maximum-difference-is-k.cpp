class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int l=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]-l>k){
                l=nums[i];
                ans++;
            }
        }
        return ans+1;
    }
};