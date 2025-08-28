class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<priority_queue<int>> pq1(n);
        vector<priority_queue<int,vector<int>,greater<int>>> pq2(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j<=i){
                    pq1[i-j].push(grid[i][j]);
                }
                else{
                    pq2[j-i].push(grid[i][j]);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j<=i){
                    grid[i][j]=pq1[i-j].top();
                    pq1[i-j].pop();
                }
                else{
                    grid[i][j]=pq2[j-i].top();
                    pq2[j-i].pop();
                }
            }
        }
        return grid;
    }
};