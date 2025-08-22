class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int t=grid.size()-1,l=grid[0].size()-1,r=0,b=0;
        int f=1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    l=min(l,j);
                    r=max(r,j);
                    t=min(t,i);
                    b=max(b,i);
                    f=0;
                }
            }
        }
        if(f==1){
            return 0;
        }
        return (r-l+1)*(b-t+1);
    }
};