class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> m;
        for(auto x: knowledge){
            m[x[0]]=x[1];
        }
        string ans="";
        string k="";
        int f=0;
        for(char c:s){
            if(c==')'){
                if(m.find(k)==m.end()){                    
                    ans+="?";
                }
                else{
                    ans+=m[k];
                }
                k="";
                f=0;
            }
            else if(c=='('){
                f=1;
            }
            else if(f==1){
                k+=c;
            }
            else{
                ans+=c;
            }
        }
        return ans;
    }
};