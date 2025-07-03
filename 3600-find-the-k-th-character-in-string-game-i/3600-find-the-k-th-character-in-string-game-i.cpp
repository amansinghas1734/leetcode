class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(true){
            int n=s.length();
            for(int i=0;i<n;i++){
                if(i==k){
                    return s[i-1];
                }
                s+='a'+(s[i]-'a'+1)%26;
            }
        }
        return 'a';
    }
};