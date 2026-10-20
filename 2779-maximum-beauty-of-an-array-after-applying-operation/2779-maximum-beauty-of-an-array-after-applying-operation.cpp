class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int i=0,j=0,ans=0;
        sort(nums.begin(),nums.end());
        while(j<nums.size()){
            if(nums[j]-k<=nums[i]+k){
                j++;
                ans=max(ans,j-i);
            }
            else{
                ans=max(ans,j-i);
                while(nums[i]+k<nums[j]-k){
                    i++;
                }
            }
        }
        return ans;
    }
};