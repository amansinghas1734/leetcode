class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0;
        int l=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int k=0;
            while(i<nums.size()&&nums[i]==l){
                k++;
                i++;
            }
            ans=max(ans,k);
        }
        return ans;
    }
};