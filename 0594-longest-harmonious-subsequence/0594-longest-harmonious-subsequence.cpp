class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,r=0;
        int ans=0;
        while(l<=r&&r<nums.size()){
            while(r<nums.size()&&nums[r]-nums[l]<=1){
                r++;
            }
            if(nums[r-1]-nums[l]==1)
            ans=max(ans,r-l);
            l++;
        }
        return ans;
    }
};