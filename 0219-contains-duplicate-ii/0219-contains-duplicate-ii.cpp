class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0,j=0;
        unordered_set<int> s;
        while(j<nums.size()){
            if(s.find(nums[j])!=s.end()){
                return true;
            }
            else{
                s.insert(nums[j]);
                j++;
            }
            if(j-i==k+1){
                s.erase(nums[i]);
                i++;
            }
        }
        return false;
    }
};