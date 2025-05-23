class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        int c=0;
        int nuk=INT_MAX;
        long long s=0;
        for(int i:nums){
            if((i^k)>i){
                c++;
                s+=(i^k);
            }
            else{
                s+=i;
            }
            nuk=min(nuk,abs(i-(i^k)));
        }
        return c%2==0?s:s-nuk;
    }
};