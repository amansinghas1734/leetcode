class Solution {
public:
    string expand(string s,int l,int r){
        int i=0;
        for(i;i<s.length();i++){
            if(l-i<0||r+i>=s.length()||s[l-i]!=s[r+i]){
                break;
            }
        }
        return s.substr(l-i+1,2*i-l+r-1);
    }
    string longestPalindrome(string s) {
        string l="";
        for(int i=0;i<s.length();i++){
            string op=expand(s,i,i);
            if(l.length()<op.length()){
                l=op;
            }
            string ep=expand(s,i,i+1);
            if(l.length()<ep.length()){
                l=ep;
            }
        }
        return l;
    }
};