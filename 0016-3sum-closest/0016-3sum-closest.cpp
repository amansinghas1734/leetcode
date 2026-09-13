class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int s=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1, k=nums.size()-1;
            while(j<k){
                int s1=nums[i]+nums[j]+nums[k];
                if(abs((long long)s1-target)<abs((long long)target-s)){
                    s=s1;
                }
                if(s1>target){
                    k--;
                }
                else if(s1==target){
                    return s1;
                }
                else{
                    j++;
                }
            }
        }
        return s;
    }
};