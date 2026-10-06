class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=0;
        int x=0;
        for(char a:s){
            if(a=='('){
                x++;
            }
            else{
                if(x<=0){
                    n++;
                }
                else{
                    x--;
                }
            }
        }
        return n+x;
    }
};