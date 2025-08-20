class Solution {
public:
int m,n;
    int solve(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>& t){
        if(i>=m||j>=n||matrix[i][j]==0){
            return 0;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int r=solve(i,j+1,matrix,t);
        int d=solve(i+1,j+1,matrix,t);
        int b=solve(i+1,j,matrix,t);
        return t[i][j]=1+min({r,d,b});
    }
    int countSquares(vector<vector<int>>& matrix) {
        m=matrix.size();
        n=matrix[0].size();
        int result=0;
        vector<vector<int>> t(m+1,vector<int>(n+1,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                result+=solve(i,j,matrix,t);
            }
        }
        return result;
    }
};