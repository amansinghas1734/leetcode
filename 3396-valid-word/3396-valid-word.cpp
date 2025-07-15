class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3){
            return false;
        }
        int v=0;
        int c=0;
        string vo="aeiou";
        for(char x:word){
            int f=0;
            for(char y:vo){
                if(y==tolower(x)){
                    v=1;
                    f=1;
                }
            }
            if(f==0&&tolower(x)>='a'&&tolower(x)<='z'){
                c=1;
                f=1;
            }
            if(x>='0'&&x<='9'){
                f=1;
            }
            if(f==0){
                return false;
            }
        }
        if(c&&v){
            return true;
        }
        return false;
    }
};