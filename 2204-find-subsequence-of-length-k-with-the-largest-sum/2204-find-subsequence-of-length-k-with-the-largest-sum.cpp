class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> v=nums;
        vector<int> ans;
        sort(v.rbegin(),v.rend());
        unordered_map<int,int> m;
        for(int j=0;j<k;j++){
            m[v[j]]++;
        }
        for(int x:nums){
            if(m[x]>0){
                ans.push_back(x);
                m[x]--;
            }
        }
        return ans;
    }
};