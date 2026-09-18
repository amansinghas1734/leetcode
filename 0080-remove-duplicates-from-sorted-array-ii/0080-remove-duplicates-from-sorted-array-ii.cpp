class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        if(nums.size()==1){
            return 1;
        }
        if(nums[i]==nums[j]){
            i++;
            j++;
        }
        while(j<nums.size()){
            if(nums[j]==nums[i]&&nums[i]==nums[i-1]){
                j++;
            }
            else{
                nums[i+1]=nums[j];
                i++;
                j++;
            }
        }
        return i+1;
    }
};