class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        int z=0;
        int ans=0;
        while(j<nums.size()){
            if(nums[j]==0){
                z++;
            }
            if(z>k){
                while(nums[i]!=0){
                    i++;
                }
                i++;
                z--;
            }
            j++;
            ans=max(ans,j-i);
        }
        return ans;
    }
};