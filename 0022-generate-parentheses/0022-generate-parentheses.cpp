class Solution {
public:
vector<string> v;
void chal(string s,int k,int o,int n){
    if(s.length()<2*n){
        if(k==0){
            s+="(";
            chal(s,k+1,o+1,n);
        }
        else{
            if(o<n){
            chal(s+"(",k+1,o+1,n);
            chal(s+")",k-1,o,n);}
            else{
            chal(s+")",k-1,o,n);   
            }
        }
    }
    else if(s.length()==2*n){
        v.push_back(s);
    }
}
    vector<string> generateParenthesis(int n) {
        string s="";
        int k=0;
        chal(s,k,0,n);
    return v;
    }
};