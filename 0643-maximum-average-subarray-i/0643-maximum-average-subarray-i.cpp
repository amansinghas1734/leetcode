class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double cs=0;
        cs=sum;
        for(int i=k;i<n;i++){
            cs=cs-nums[i-k]+nums[i];
            sum=max(sum,cs);
        }
        return sum/k;
    }
};