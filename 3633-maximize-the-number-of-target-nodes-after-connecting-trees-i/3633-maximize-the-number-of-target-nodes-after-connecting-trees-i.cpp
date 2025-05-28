class Solution {
public:
    int target(unordered_map<int, vector<int>>& m1, int i, int k) {
    if (k < 0) return 0;

    queue<int> q;
    q.push(i);
    int ans = 0;
    vector<int> vis(m1.size(), 0);  
    vis[i] = 1;

    while (!q.empty() && k >= 0) {
        int sz = q.size();
        while (sz--) {
            int x = q.front();
            q.pop();
            ans++;
            for (auto y : m1[x]) {
                if (!vis[y]) {
                    q.push(y);
                    vis[y] = 1;
                }
            }
        }
        k--;
    }

    return ans;
}
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        unordered_map<int,vector<int>> m1;
        unordered_map<int,vector<int>> m2;
        for(auto x:edges1){
            m1[x[0]].push_back(x[1]);
            m1[x[1]].push_back(x[0]);
        }
        for(auto x:edges2){
            m2[x[0]].push_back(x[1]);
            m2[x[1]].push_back(x[0]);
        }
        int n=m1.size();
        int m=m2.size();
        int ma=0;
        for(int i=0;i<m;i++){
            ma=max(ma,target(m2,i,k-1));
        }
        vector<int> v(n,ma);
        for(int i=0;i<n;i++){
            v[i]+=target(m1,i,k);
        }
        return v;
    }
};