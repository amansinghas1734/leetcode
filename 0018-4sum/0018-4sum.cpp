class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>> ans;
       sort(nums.begin(), nums.end());
       for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            for(int j=nums.size()-1;j>i+2;j--){
                if (j < nums.size() - 1 && nums[j] == nums[j + 1]) {
                    continue;
                }
                int k=i+1,l=j-1;
                while(k<l){
                    long s=(long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(s==(long)target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        while(k<l&&nums[k]==nums[k-1]){
                            k++;
                        }
                        while(k<l&&nums[l]==nums[l+1]){
                            l--;
                        }
                    }
                    else if(s<(long)target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
       } 
       return ans;
    }
};