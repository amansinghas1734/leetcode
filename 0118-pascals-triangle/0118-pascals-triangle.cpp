class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> x(numRows);
        for(int i=0;i<numRows;i++){
            if(i==0){
                x[0].push_back(1);
            }
            else{
            for(int j=0;j<=x[i-1].size();j++){
                if(j==0||j==x[i-1].size()){
                    x[i].push_back(1);
                }
                else{
                    x[i].push_back(x[i-1][j-1]+x[i-1][j]);
                }
            }}
        }
        return x;
    }
};