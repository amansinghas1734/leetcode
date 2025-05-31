class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        vector<bool> visited(n * n, false);
        queue<pair<int, int>> q; 
        q.push({0, 0});
        visited[0] = true;

        while (!q.empty()) {
            auto [i, steps] = q.front(); q.pop();
            if (i == n * n - 1) return steps;

            for (int j = i + 1; j <= i + 6 && j < n * n; ++j) {
                int c = j / n;
                int a = n - 1 - c;
                int b = j % n;
                if (c % 2 == 1) b = n - 1 - b;

                int next = board[a][b] == -1 ? j : board[a][b] - 1;
                if (!visited[next]) {
                    visited[next] = true;
                    q.push({next, steps + 1});
                }
            }
        }

        return -1;
    }
};
