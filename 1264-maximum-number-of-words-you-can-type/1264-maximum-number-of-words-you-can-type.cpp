class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<int> v(26,0);
        int ans=0;
        for(char c:brokenLetters){
            v[c-'a']++;
        }
        text+=' ';
        for(int i=0;i<text.length();i++){
            if(text[i]==' '){
                ans++;
                continue;
            }
            if(v[text[i]-'a']>0){
                while(i<text.length()&&text[i]!=' '){
                    i++;
                }
            }
        }
        return ans;
    }
};