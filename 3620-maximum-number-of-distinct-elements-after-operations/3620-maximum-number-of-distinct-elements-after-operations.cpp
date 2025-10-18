class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int d=INT_MIN;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-k>d){
                d=nums[i]-k;
                ans++;
            }
            else if(nums[i]-k<=d&&nums[i]+k>d){
                d++;
                ans++;
            }
            cout<<d<<" "<<ans<<endl;
        }
        return ans;
    }
};