class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long ans = 0;
        for (int k=max(0,n-2*limit); k<=min(limit,n); k++) {
            int N=n-k;
            int minch2=max(0,N-limit);
            int maxch2=min(limit,N);
            ans+=maxch2-minch2+1;
        }
        return ans;
    }
};
