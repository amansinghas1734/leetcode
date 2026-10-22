using ll = long long;
ll n, pref, ans;

unordered_map<int,ll>m; 

class Solution {
public:
    ll maximumSubarraySum(vector<int>& nums, int k) {
        n = nums.size(); m.clear();
        pref = 0; ans = LLONG_MIN;

        for(int i = 0; i < n; i++){
            if(m.find(nums[i]) == m.end()) m[nums[i]] = pref;
            else m[nums[i]] = min(pref,m[nums[i]]);
            pref += nums[i];

            int key1 = nums[i]-k;
            int key2 = nums[i]+k;
            
            if(m.find(key1) != m.end()){
                ans = max(ans,pref-m[key1]);
            }

            if(m.find(key2) != m.end()){
                ans = max(ans,pref-m[key2]);
            }
        }

        return ans == LLONG_MIN ? 0 : ans;
    }
};