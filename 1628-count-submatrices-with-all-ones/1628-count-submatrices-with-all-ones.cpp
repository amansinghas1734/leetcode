class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = n - 1; j >= 0; j--) {
                if (mat[i][j] == 1) {
                    dp[i][j] = (j == n - 1) ? 1 : dp[i][j + 1] + 1;
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int width = INT_MAX;
                for (int k = i; k < m && dp[k][j] > 0; k++) {
                    width = min(width, dp[k][j]);
                    ans += width;
                }
            }
        }

        return ans;
    }
};
