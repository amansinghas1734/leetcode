class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-2;i>0;i--){
            int a=nums[i-1],b=nums[i],c=nums[i+1];
            if(a+b>c){
                ans=a+b+c;
                break;
            }
        }
        return ans;
    }
};