class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> res(n-k+1,-1);
        int i=0,j=k;
        int c=1;
        for(i=1;i<k;i++){
            if(nums[i]==nums[i-1]+1){
                c++;
            }
            else{
                c=1;
            }
        }
        if(c>=k){
            res[0]=nums[i-1];
        }
        i=1;
        while(j<n){
            if(nums[j]==nums[j-1]+1){
                c++;
            }
            else{
                c=1;
            }
            if(c>=k){
                res[i]=nums[j];
            }
            i++;
            j++;
        }
        return res;
    }
};