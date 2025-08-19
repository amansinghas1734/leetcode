class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt++;
            }
            else{
                ans+=(long long) cnt*(cnt+1)/2;
                cnt=0;
            }
        }
        if(cnt!=0){
            ans+=(long long) cnt*(cnt+1)/2;
            cnt=0;
        }
        return ans;
    }
};