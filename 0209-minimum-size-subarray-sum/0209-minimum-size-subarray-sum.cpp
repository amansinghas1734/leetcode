class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int s=0;
        int i=0,j=0;
        while(target<=s||(i<=j&&j<nums.size())){
            if(s<target){
                s+=nums[j];
                j++;
            }
            else{
                ans=min(ans,j-i);
                s-=nums[i];
                i++;
            }
        }
        return ans==INT_MAX?0:ans;
    }
};