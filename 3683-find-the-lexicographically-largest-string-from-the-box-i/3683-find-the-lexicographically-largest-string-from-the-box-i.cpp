class Solution {
public:
    string answerString(string word, int numFriends) {
        int l=word.length();
        if(numFriends==1){
            return word;
        }
        int i=0;
        int j=0;
        while(j<word.size()){
            if(word[j]>word[i]){
                i=j;
                j++;
                continue;
            }
            if(word[j]==word[i]){
                int k=1;
                while(j+k<l&&k<l-(numFriends-1)){
                    if(word[j+k]>word[i+k]){
                        i=j;
                        j=j+k-1;
                        break;
                    }
                    else if(word[j+k]<word[i+k]){
                        j=j+k-1;
                        break;
                    }
                    k++;
                }
            }
            j++;
        }
        return word.substr(i,min(l-numFriends+1,l-i));
    }
};