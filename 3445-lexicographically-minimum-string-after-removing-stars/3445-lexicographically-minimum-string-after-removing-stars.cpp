class Solution {
public:
    string clearStars(string s) {
       int n=s.length();
       vector<vector<int>> v(26,vector<int>(0));
       for(int i=0;i<n;i++){
        if(s[i]=='*'){
            for(int j=0;j<26;j++){
                if(!v[j].empty()){
                    s[v[j].back()]='*';
                    v[j].pop_back();
                    break;
                }
            }
        }
        else{
            v[s[i]-'a'].push_back(i);
        }
       }
       string a="";
       for(char c:s){
        if(c!='*'){
            a+=c;
        }
       }
       return a; 
    }
};