class Solution {
public:
    string makeFancyString(string s) {
    if(s.length()<3) {
        return s;
    }
    string ans="";
    ans+=s[0];
    for (int i = 1; i < s.size()-1; ++i){
        if(s[i]==s[i-1]&&s[i]==s[i+1]){
            continue;
        }
        else{
            ans+=s[i];
        }
    }
    ans+=s[s.length()-1];
    return ans;
}
};