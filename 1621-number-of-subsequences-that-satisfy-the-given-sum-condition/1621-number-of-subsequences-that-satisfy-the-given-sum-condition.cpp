class Solution {
public:
    int mod=1e9+7;
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> pow(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            pow[i]=pow[i-1]*2%mod;
        }
        int ans=0;
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(nums[i]+nums[j]<=target){
                ans=((ans%mod)+pow[j-i])%mod;
                ans%=mod;
                i++;
            }
            else(j--);
        }
        return ans;
    }
};