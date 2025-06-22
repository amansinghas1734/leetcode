class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
        int i=0;
        int n=s.length();
        while(i+k-1<n){
            v.push_back(s.substr(i,k));
            i+=k;
        }
        string m="";
        if(i<n){
            m=s.substr(i,n-i);
        while(m.length()<k){
            m+=fill;
        }
        v.push_back(m);}
        return v;
    }
};