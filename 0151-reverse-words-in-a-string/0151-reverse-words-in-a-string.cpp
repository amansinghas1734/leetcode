class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        stringstream ss(s);
        string w;
        string s2="";
        while(ss>>w){
            s2=" "+w+s2;
        }
        return s2.substr(1,s.length());
    }
};