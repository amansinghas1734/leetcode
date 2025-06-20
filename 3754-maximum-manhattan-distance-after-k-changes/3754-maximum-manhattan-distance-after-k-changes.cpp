class Solution {
public:
    int maxDistance(string s, int k) {
        int N=0;
        int S=0;
        int E=0;
        int W=0;
        int a=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='N'){
                N++;
            }
            else if(s[i]=='S'){
                S++;
            }
            else if(s[i]=='E'){
                E++;
            }
            else{
                W++;
            }
            a=max(a,(max(N,S)-min(N,S)+max(E,W)-min(E,W)+2*(min(k,min(N,S)+min(E,W)))));
        }
       return a;
    }
};