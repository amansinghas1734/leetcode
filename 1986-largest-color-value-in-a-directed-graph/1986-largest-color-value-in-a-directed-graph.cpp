class Solution {
public:
    int ans=0;
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n=colors.length();
        vector<vector<int>> v(n,vector<int>(0));
        queue<int> q;
        vector<int> ind(n,0);
        vector<vector<int>> co(n,vector<int>(26,0));
        for(auto x:edges){
            v[x[0]].push_back(x[1]);
            ind[x[1]]++;
        }
        for(int i=0;i<n;i++){
            if(ind[i]==0){
                q.push(i);
                co[i][colors[i]-'a']=1;
            }
        }
        while(!q.empty()){
            int x=q.front();
            q.pop();
            n--;
            ans=max(ans,co[x][colors[x]-'a']);
            for(int& y:v[x]){
                for(int i=0;i<26;i++){
                    co[y][i]=max(co[y][i],co[x][i]+(colors[y]-'a'==i));
                }
                ind[y]--;
                if(ind[y]==0){
                    q.push(y);
                }
            }
        }
        if(n>0){
            return -1;
        }
        return ans;
    }
};