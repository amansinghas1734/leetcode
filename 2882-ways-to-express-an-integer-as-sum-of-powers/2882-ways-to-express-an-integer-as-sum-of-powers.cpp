class Solution {
public:
    int MOD = 1e9 + 7;

    long long power(long long base, int exp, int limit) {
        long long result = 1;
        for (int i = 0; i < exp; i++) {
            result *= base;
            if (result > limit) return result; 
        }
        return result;
    }

    int solve(int n, int l, int x, int c, vector<vector<int>>& dp) {
        if (n == 0) return 1;
        if (n < 0 || c > l) return 0;
        if (dp[n][c] != -1) return dp[n][c];

        long long p = power(c, x, n); 
        if (p > n) return dp[n][c] = solve(n, l, x, c + 1, dp);

        long long take = solve(n - p, l, x, c + 1, dp) % MOD;
        long long skip = solve(n, l, x, c + 1, dp) % MOD;

        return dp[n][c] = (take + skip) % MOD;
    }

    int numberOfWays(int n, int x) {
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return solve(n, n, x, 1, dp);
    }
};
