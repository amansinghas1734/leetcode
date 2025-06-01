class Solution {
public:
    long long comb(int n, int r) {
        if (n < 0 || r < 0 || r > n) return 0;
        long long res = 1;
        for (int i = 1; i <= r; ++i) {
            res = res * (n - i + 1) / i;
        }
        return res;
    }

    long long distributeCandies(int n, int limit) {
        long long ans = 0;
        for (int k = 0; k <= 3; ++k) {
            long long sign = (k % 2 == 0) ? 1 : -1;
            long long term = comb(3, k) * comb(n - k * (limit + 1) + 2, 2);
            ans += sign * term;
        }
        return ans;
    }
};
