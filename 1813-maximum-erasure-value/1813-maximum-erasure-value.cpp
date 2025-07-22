class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        set<int> s;
        int i=0,j=0;
        int sum=0;
        int ans=0;
        while(j<nums.size()){
            while(s.contains(nums[j])){
                ans=max(ans,sum);
                s.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
            s.insert(nums[j]);
            sum+=nums[j];
            j++;
        }
        ans=max(ans,sum);
        return ans;

    }
};