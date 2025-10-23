class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length()>2){
            string a="";
            for(int i=0;i<s.length()-1;i++){
                a+=(s[i]+s[i+1]-'0'-'0')%10+'0';
            }
            s=a;
        }
        return s[0]==s[1]?true:false;
    }
};