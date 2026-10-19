
class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long ans=0;
        multiset<int> m;
        int i=0,j=0;
        while(j<nums.size()){
            m.insert(nums[j]);
            while(*m.rbegin()-*m.begin()>=3){
                m.erase(m.find(nums[i]));
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
};
