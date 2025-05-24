class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        for(int i=0;i<words.size();i++){
            for(char j:words[i]){
                if(j==x){
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};