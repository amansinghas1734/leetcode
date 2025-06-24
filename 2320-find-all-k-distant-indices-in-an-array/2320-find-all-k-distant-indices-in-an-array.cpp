class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> v;
        int f=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                for(int j=max(i-k,f);j<min(i+k+1,(int)nums.size());j++){
                    v.push_back(j);
                    f=j+1;
                }
            }
        }
        return v;
    }
};