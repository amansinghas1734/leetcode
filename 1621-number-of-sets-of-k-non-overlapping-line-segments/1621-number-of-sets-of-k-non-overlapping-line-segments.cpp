
class Solution {
public:
    int MOD = 1e9 + 7;
    int dp[1001][1001][2];

    int solve(int i, int k, int open, int n) {
        if (k < 0) return 0;
        if (i == n) {
            return (k == 0 && open == 0);
        }
        if (dp[i][k][open] != -1)
            return dp[i][k][open];
        long long ans = 0;
        if (open == 0) {
            ans += solve(i + 1, k, 0, n);
            ans += solve(i + 1, k, 1, n);
        }
        else {
            ans += solve(i + 1, k, 1, n);
            ans += solve(i + 1, k - 1, 0, n);
            ans += solve(i + 1, k - 1, 1, n);
        }
        return dp[i][k][open] = ans % MOD;
    }

    int numberOfSets(int n, int k) {
        memset(dp, -1, sizeof(dp));
        return solve(0, k, 0, n);
    }
};