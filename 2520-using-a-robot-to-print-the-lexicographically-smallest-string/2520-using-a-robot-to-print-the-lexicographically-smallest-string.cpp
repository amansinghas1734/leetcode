class Solution {
public:
    string robotWithString(string s) {
        int n=s.length();
        vector<char> v(n,' ');
        v[n-1]=s[n-1];
        for(int i=n-2;i>=0;i--){
            v[i]=min(s[i],v[i+1]);
        }
        string t="";
        string ans="";
        int i=0;
        while(i<n){
            t.push_back(s[i]);
            char c= (i+1==n)?s[i]:v[i+1];
            while(!t.empty()&&t.back()<=c){
                ans.push_back(t.back());
                t.pop_back();
            }
            i++;
        }
        while(!t.empty()){
            ans.push_back(t.back());
            t.pop_back();
        }
    return ans;
    }
};