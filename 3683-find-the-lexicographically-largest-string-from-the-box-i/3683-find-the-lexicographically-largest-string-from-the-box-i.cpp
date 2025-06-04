class Solution {
public:
    string ans;
    void solve(string s){
        int i=0,j=0;
        while(i<ans.size()&&j<s.size()){
            if(ans[i]==s[j]){
                i++;
                j++;
            }
            else if(ans[i]<s[j]){
                ans=s;
                return;
            }
            else{
                return;
            }
        }
        if(i==ans.size()){
            ans=s;
        }
    }
    string answerString(string word, int numFriends) {
        if(numFriends==1){
            return word;
        }
        int l=word.length();
        int a=l-numFriends;
        a++;
        ans=word.substr(0,a);
        for(int i=1;i<l-a;i++){
            solve(word.substr(i,a));
        }
        int i=l-a;
        while(i<l){
            solve(word.substr(i));
            i++;
        }
        return ans;
    }
};