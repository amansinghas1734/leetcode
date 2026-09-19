class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        int i=0;
        while(i<chars.size()){
            s+=chars[i];
            int x=i;
            while(i<chars.size()&&chars[i]==chars[x]){
                i++;
            }
            if(i-x!=1){
                s+=to_string(i-x);
            }
        }
        for(i=0;i<s.length();i++){
            chars[i]=s[i];
        }
        return s.length();
    }
};