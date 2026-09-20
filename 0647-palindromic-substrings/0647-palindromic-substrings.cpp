class Solution {
public:
    int expand(string s,int l,int r){
        int a=0;
        while(l>=0&&r<s.length()){
            if(s[l]==s[r]){
                a++;
            }
            else{
                break;
            }
            l--;
            r++;
        }
        return a;
    }
    int countSubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            ans+=expand(s,i,i);
            ans+=expand(s,i,i+1);
        }
        return ans;
    }
};