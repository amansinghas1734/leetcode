class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> x;
        for(int i=0;i<=(nums.size()/2)+1;i++){
            if(x.find(nums[i])!=x.end()){
                return nums[i];
            }
            x.insert(nums[i]);
        }
        return 0;
    }
};