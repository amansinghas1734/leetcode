class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nums[i]*=-1;
            }
        }
        sort(nums.begin(),nums.end());
        int i=0;
        long long ans=0;
        n--;
        int f=1;
        while(i<=n){
            if(f==1){
                ans+=pow(nums[n],2);
                n--;
                f=-1;
            }
            else{
                ans-=pow(nums[i],2);
                i++;
                f=1;
            }
        }
        return ans;
    }
};