class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        int i=0;
        while(i<m){
            int j=0;
            while(j<n){
                if(grid[i][j]<0){
                    ans+=((n-j)*(m-i));
                    n=j;
                }
                j++;
            }
            i++;
        }
        return ans;
    }
};