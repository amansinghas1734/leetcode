class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()-2){
            if(nums[i+2]-nums[i]<=k){
                v.push_back({nums[i],nums[i+1],nums[i+2]});
                i+=3;
            }
            else{
                return {};
            }
        }
        return v;
    }
};