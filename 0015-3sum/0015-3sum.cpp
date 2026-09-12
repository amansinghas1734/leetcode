class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int j = 0; j < nums.size() - 2; j++) {
            if(j > 0 && nums[j] == nums[j - 1])
                continue;
            int i = j + 1;
            int k = nums.size() - 1;
            while(i < k) {
                int sum = nums[j] + nums[i] + nums[k];
                if(sum == 0) {
                    ans.push_back({nums[j], nums[i], nums[k]});
                    i++;
                    k--;
                    while(i < k && nums[i] == nums[i - 1])
                        i++;
                    while(i < k && nums[k] == nums[k + 1])
                        k--;
                }
                else if(sum < 0) {
                    i++;
                }
                else {
                    k--;
                }
            }
        }
        return ans;
    }
};