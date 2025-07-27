class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<nums.size()-1;i++){
            while(nums[i]==nums[i-1]){
                i++;
                if(i==nums.size()){
                    return ans;
                }
            }
            if(nums[i]>nums[i-1]&&i+1<nums.size()){
                while(nums[i]==nums[i+1]){
                    i++;
                    if(i+1==nums.size()){
                        return ans;
                    }
                }
                if(nums[i+1]<nums[i]){
                    ans++;
                }
            }
            if(nums[i]<nums[i-1]){
                while(nums[i]==nums[i+1]){
                    i++;
                    if(i+1==nums.size()){
                        return ans;
                    }
                }
                if(nums[i+1]>nums[i]){
                    ans++;
                }
            }
        }
        return ans;
    }
};