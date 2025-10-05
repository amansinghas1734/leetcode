class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        vector<vector<int>> pacific(m, vector<int>(n, 0));
        vector<vector<int>> atlantic(m, vector<int>(n, 0));
        
        auto dfs = [&](auto&& self, int i, int j, vector<vector<int>>& ocean) -> void {
            ocean[i][j] = 1;
            vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};
            for (auto [dx, dy] : dirs) {
                int x = i + dx, y = j + dy;
                if (x >= 0 && y >= 0 && x < m && y < n && !ocean[x][y] && heights[x][y] >= heights[i][j]) {
                    self(self, x, y, ocean);
                }
            }
        };
        
        for (int i = 0; i < m; ++i) {
            dfs(dfs, i, 0, pacific);
            dfs(dfs, i, n - 1, atlantic);
        }
        for (int j = 0; j < n; ++j) {
            dfs(dfs, 0, j, pacific);
            dfs(dfs, m - 1, j, atlantic);
        }
        
        vector<vector<int>> res;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (pacific[i][j] && atlantic[i][j])
                    res.push_back({i, j});
            }
        }
        return res;
    }
};
