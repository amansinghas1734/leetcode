class Solution {
public:
    int solve(int cr,int i,int j,int m,int n,int f,int d,vector<vector<int>>& grid){
        if(i<0||i>=m||j<0||j>=n){
            return 0;
        }
        int s=2-cr;
        if(grid[i][j]!=s){
            return 0;
        }
        int di;
        if(d==0){
            di=solve(s,i-1,j-1,m,n,f,d,grid);
            if(f==0){
            int df=solve(s,i-1,j+1,m,n,1,(d+1)%4,grid);
            di=max(di,df);
            }
        }
        if(d==1){
            di=solve(s,i-1,j+1,m,n,f,d,grid);
            if(f==0){
            int df=solve(s,i+1,j+1,m,n,1,(d+1)%4,grid);
            di=max(di,df);
            }
        }
        if(d==2){
            di=solve(s,i+1,j+1,m,n,f,d,grid);
            if(f==0){
            int df=solve(s,i+1,j-1,m,n,1,(d+1)%4,grid);
            di=max(di,df);
            }
        }
        if(d==3){
            di=solve(s,i+1,j-1,m,n,f,d,grid);
            if(f==0){
            int df=solve(s,i-1,j-1,m,n,1,(d+1)%4,grid);
            di=max(di,df);
            }
        }
        return 1+di;
    }
    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int ans=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    ans=max(ans,1+solve(0,i-1,j-1,m,n,0,0,grid));
                    ans=max(ans,1+solve(0,i-1,j+1,m,n,0,1,grid));
                    ans=max(ans,1+solve(0,i+1,j+1,m,n,0,2,grid));
                    ans=max(ans,1+solve(0,i+1,j-1,m,n,0,3,grid));
                }
            }
        }
        return ans;
    }
};