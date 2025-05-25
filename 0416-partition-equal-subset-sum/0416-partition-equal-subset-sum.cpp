class Solution {
public:
    int t[10001][201];
    bool subSum(vector<int>& nums,int s,int i){
        if(i>nums.size()-1||s<0){
            return false;
        }
        if(s==0){
            return true;
        }
        if(t[s][i]!=-1){
            return t[s][i];
        }
        return t[s][i]=subSum(nums,s-nums[i],i+1)||subSum(nums,s,i+1);
    }
    bool canPartition(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        int s=accumulate(nums.begin(),nums.end(),0);
        cout<<s;
        if(s%2!=0){
            return false;
        }
        return subSum(nums,s/2,0);
    }
};