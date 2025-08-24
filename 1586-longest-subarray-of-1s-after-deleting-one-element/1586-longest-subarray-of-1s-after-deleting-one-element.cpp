class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0,f=-1;
        int ans=0;
        while(l<nums.size()&&nums[l]==0){
            l++;
            r++;
        }
        while(r<nums.size()){
            if(nums[r]==1){
                r++;
            }
            else if(nums[r]==0&&f==-1){
                f=r;
                r++;
            }
            else{
                l=f+1;
                f=r;
                r++;
            }
            if(f==-1){
                ans=max(ans,r-l);
            }
            else{
                ans=max(ans,r-l-1);
            }
        }
        if(ans==nums.size()){
            return ans-1;
        }
        return ans;
    }
};