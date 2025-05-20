class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int> v(n,0);
        for(auto x:queries){
            v[x[0]]++;
            if(x[1]+1<n){
                v[x[1]+1]--;
            }
        }
        for(int i=1;i<n;i++){
            v[i]+=v[i-1];
            if(v[i]<nums[i]){
                return false;
            }
        }
        return v[0]>=nums[0];
    }
};