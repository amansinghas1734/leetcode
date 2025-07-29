class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        vector<int> setter(32,-1);
        vector<int> res(nums.size(),0);
        for(int i=nums.size()-1;i>=0;i--){
            int eI=i;
            for(int k=0;k<32;k++){
                if ((nums[i] & (1 << k)) != 0) {
                    setter[k]=i;
                }
                else{
                    if(setter[k]!=-1){
                        eI=max(eI,setter[k]);
                    }
                }
            }
            res[i]=eI-i+1;
        }
        
        return res;
    }
};