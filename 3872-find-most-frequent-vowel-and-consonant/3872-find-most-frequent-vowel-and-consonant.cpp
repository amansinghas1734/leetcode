class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> v(26,0);
        int maxVow=0;
        int maxCons=0;
        for(char c:s){
            v[c-'a']++;
            if(string("aeiou").find(c)!=-1){
                maxVow=max(maxVow,v[c-'a']);
            }
            else{
                maxCons=max(maxCons,v[c-'a']);
            }
        }
        return maxVow+maxCons;
    }
};