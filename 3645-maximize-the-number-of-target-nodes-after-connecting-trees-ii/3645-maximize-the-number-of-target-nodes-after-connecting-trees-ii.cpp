class Solution {
public:
    void dfs(unordered_map<int, vector<int>>& m, int i, int d, vector<int>& dep, vector<int>& vis, int& even, int& odd) {
        vis[i] = 1;
        dep[i] = d;
        if (d % 2 == 0) even++;
        else odd++;
        for (auto x : m[i]) {
            if (!vis[x]) {
                dfs(m, x, d + 1, dep, vis, even, odd);
            }
        }
    }

    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        unordered_map<int, vector<int>> m1, m2;
        for (auto x : edges1) {
            m1[x[0]].push_back(x[1]);
            m1[x[1]].push_back(x[0]);
        }
        for (auto x : edges2) {
            m2[x[0]].push_back(x[1]);
            m2[x[1]].push_back(x[0]);
        }

        int n = m1.size();
        int m = m2.size();

        vector<int> dep1(n, 0), vis1(n, 0);
        vector<int> dep2(m, 0), vis2(m, 0);

        int even1 = 0, odd1 = 0;
        int even2 = 0, odd2 = 0;

        dfs(m1, 0, 0, dep1, vis1, even1, odd1);
        dfs(m2, 0, 0, dep2, vis2, even2, odd2);

        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            int targets_in_t1 = (dep1[i] % 2 == 0) ? even1 : odd1;
            int best_from_t2 = max(even2, odd2);
            v[i] = targets_in_t1 + best_from_t2;
        }

        return v;
    }
};
