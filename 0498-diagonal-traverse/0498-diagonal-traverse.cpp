class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int i=0,j=0;
        int m=mat.size();
        int n=mat[0].size();
        if(m==1){
            return mat[0];
        }
        if(n==1){
            for(int i=0;i<m;i++){
                ans.push_back(mat[i][0]);
            }
            return ans;
        }
        while(i<m&&j<n){
            ans.push_back(mat[i][j]);
            if(j==n-1&&i<m-1){
                i++;
                ans.push_back(mat[i][j]);
            }
            if(i==0&&j<n-1){
                j++;
                ans.push_back(mat[i][j]);
            }
            if(i==m-1&&j<n-1){
                j++;
                ans.push_back(mat[i][j]);
            }
            if(j==0&&i<m-1){
                i++;
                ans.push_back(mat[i][j]);
            }
            if((i+j)%2==0){
                i--;
                j++;
            }
            else{
                i++;
                j--;
            }
        }
        return ans;

    }
};