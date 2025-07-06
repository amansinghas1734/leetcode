class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=INT_MIN;
        int ps=0;
        for(int i=0;i<nums.size();i++){
            ps+=nums[i];
            cs=max(cs,ps);
            ps=max(ps,0);
        }
        return cs;
    }
};