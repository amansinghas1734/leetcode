class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int x=0,y=0;
        for(int i=0,j=0;i<s.length()||j<t.length();i++,j++){
            if(i<s.length()&&s[i]=='#'){
                x--;
                x=max(0,x);
            }
            else if(i<s.length()&&s[i]!='#'){
                s[x]=s[i];
                x++;
            }
            if(j<t.length()&&t[j]=='#'){
                y--;
                y=max(0,y);
            }
            else if(j<t.length()&&t[j]!='#'){
                t[y]=t[j];
                y++;
            }
        }
        if(x!=y){
            return false;
        }
        for(int i=0;i<x;i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};