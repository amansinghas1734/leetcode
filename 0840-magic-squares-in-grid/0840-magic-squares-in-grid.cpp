class Solution {
public:
    bool checkGrid(vector<vector<int>>& grid,int r,int c){
        unordered_set<int> st;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int num=grid[r+i][c+j];
                if(num<1||num>9||st.count(num)){
                    return false;
                }
                st.insert(num);
            }
        }
        int rs=grid[r][c]+grid[r][c+1]+grid[r][c+2];
        for(int i=0;i<3;i++){
            if(grid[r][c+i]+grid[r+1][c+i]+grid[r+2][c+i]!=rs){
                return false;
            }
            if(grid[r+i][c]+grid[r+i][c+1]+grid[r+i][c+2]!=rs){
                return false;
            }
        }
        if(grid[r][c]+grid[r+1][c+1]+grid[r+2][c+2]!=rs){
            return false;
        }
        if(grid[r][c+2]+grid[r+1][c+1]+grid[r+2][c]!=rs){
            return false;
        }
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int c=0;
        int rows=grid.size();
        int cols=grid[0].size();
        for(int i=0;i<=rows-3;i++){
            for(int j=0;j<=cols-3;j++){
                if(checkGrid(grid,i,j)){
                    c++;
                }
            }
        }
        return c;
    }
};