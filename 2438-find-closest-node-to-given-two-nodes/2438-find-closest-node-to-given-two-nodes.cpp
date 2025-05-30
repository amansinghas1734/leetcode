class Solution {
public:
void dfs(vector<int>& adj,vector<int>& vis,int n,int f){
    if(n==-1){
        return;
    }
    vis[n]=f;
    if(adj[n]!=-1&&vis[adj[n]]==-1){
        dfs(adj,vis,adj[n],f+1);
    }
}
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size();
        vector<int> vis(n,-1);
        vector<int> vis2(n,-1);
        dfs(edges,vis,node1,0);
        dfs(edges,vis2,node2,0);
        int ans=-1;
        for(int i=0;i<n;i++){
            cout<<vis[i]<<vis2[i]<<endl;
            if(vis[i]!=-1&&vis2[i]!=-1){
                if(ans==-1){
                    ans=i;
                }
                else{
                    if(max(vis[ans],vis2[ans])>max(vis[i],vis2[i])){
                        ans=i;
                    }
                    else if(max(vis[ans],vis2[ans])==max(vis[i],vis2[i])){
                        ans=min(ans,i);
                    }
                }
            }
        }
        return ans;
    }
};