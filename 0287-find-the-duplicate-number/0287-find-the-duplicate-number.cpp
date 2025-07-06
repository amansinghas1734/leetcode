class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int x=abs(nums[i]);
            if(nums[x-1]>0){
                nums[x-1]*=-1;
            }
            else{
                return x;
            }
        }
        return -1;
    }
};