class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    for(int k=0;k<9;k++){
                        if(board[i][j]==board[i][k]&&k!=j){
                            return false;
                        }
                    }
                    for(int k=0;k<9;k++){
                        if(board[i][j]==board[k][j]&&k!=i){
                            return false;
                        }
                    }
                    int l=i/3;
                    int m=j/3;
                    l*=3;
                    m*=3;
                    for(int x=0;x<3;x++){
                        for(int y=0;y<3;y++){
                            if ((l + x != i && m + y != j) && board[l + x][m + y] == board[i][j]) {
                                return false;
                            }
                        }
                    }
                    }
            }
        }
       return true; 
    }
};