class Solution {
public:
    long long solve(vector<vector<int>>& grid, int i,int j){
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()){
            return 0;
        }
        if(grid[i][j]==0){
            return 0;
        }
        long long s=grid[i][j];
        grid[i][j]=0;
        s+=solve(grid,i+1,j);
        s+=solve(grid,i,j+1);
        s+=solve(grid,i-1,j);
        s+=solve(grid,i,j-1);
        return s;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]!=0&&solve(grid,i,j)%k==0){
                    ans++;
                }
            }
        }
        return ans;
    }
};