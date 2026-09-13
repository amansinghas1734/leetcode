class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int i=0, j=nums.size()-1;
        while(i<=j){
            if(abs(nums[i])<=abs(nums[j])){
                ans.insert(ans.begin(), nums[j]*nums[j]);
                j--;
            }
            else{
                ans.insert(ans.begin(), nums[i]*nums[i]);
                i++;
            }
        }
        return ans;
    }
};