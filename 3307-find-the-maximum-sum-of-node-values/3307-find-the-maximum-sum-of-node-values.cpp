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
    // long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
    //     long long  sum        = 0;
    //     int count      = 0;
    //     int minNukasan = INT_MAX;

    //     for (long long num : nums) {

    //         if((num^k) > num) {
    //             count++;
    //             sum += (num^k);
    //         } else {
    //             sum += num;
    //         }

    //         minNukasan = min((long long)minNukasan, abs(num - (num ^ k)));
    //     }

    //     if(count%2 == 0)
    //         return sum;

    //     return sum - minNukasan;
    // }
};