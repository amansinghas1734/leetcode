class Solution {
public:
    int v[10002][14]; 

    int solve(vector<int>& c, int a, int j) {
        if (a == 0) return 0;
        if (a < 0 || j >= c.size()) return INT_MAX;

        if (v[a][j] != -1) return v[a][j];

        int take = solve(c, a - c[j], j);
        int skip = solve(c, a, j + 1);

        if (take != INT_MAX) take += 1; 

        return v[a][j] = min(take, skip);
    }

    int coinChange(vector<int>& coins, int amount) {
        memset(v, -1, sizeof(v));
        int x = solve(coins, amount, 0);
        return x == INT_MAX ? -1 : x;
    }
};
