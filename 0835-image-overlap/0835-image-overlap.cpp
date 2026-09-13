class Solution {
public:
    int solve(vector<vector<int>>& img1, vector<vector<int>>& img2,
          int x, int y, int m, int n,
          vector<vector<int>>& vis){
    if(abs(x)>=n || abs(y)>=m)
        return 0;
    if(vis[y+m-1][x+n-1])
        return 0;
    vis[y+m-1][x+n-1] = 1;
    int a=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i+y>=0 && i+y<m && j+x>=0 && j+x<n){
                if(img1[i+y][j+x] + img2[i][j] == 2)
                    a++;
            }
        }
    }
    a=max(a,solve(img1,img2,x-1,y,m,n,vis));
    a=max(a,solve(img1,img2,x+1,y,m,n,vis));
    a=max(a,solve(img1,img2,x,y-1,m,n,vis));
    a=max(a,solve(img1,img2,x,y+1,m,n,vis));
    return a;
}
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int m=img1.size();
        int n=img1[0].size();
        vector<vector<int>> vis(2*m-1, vector<int>(2*n-1, 0));
        return solve(img1,img2,0,0,m,n,vis);
    }
};