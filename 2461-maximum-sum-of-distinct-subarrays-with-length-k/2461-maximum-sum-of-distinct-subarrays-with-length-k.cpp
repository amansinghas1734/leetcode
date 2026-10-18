class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0;
        int i=0,j=0;
        unordered_set<int> s;
        long long sum=0;
        while(j<nums.size()){
            if(s.find(nums[j])!=s.end()){
                while(nums[i]!=nums[j]){
                    sum-=nums[i];
                    s.erase(nums[i]);
                    i++;
                }
                sum-=nums[i];
                s.erase(nums[i]);
                i++;
            }
            sum+=nums[j];
            s.insert(nums[j]);
            if(j-i+1<k){
                j++;
                continue;
            }
            else if(j-i+1==k){
                j++;
            }
            else{
                sum-=nums[i];
                s.erase(nums[i]);
                i++;
                j++;
            }
            ans=max(ans,sum);
        }
        return ans;

    }
};