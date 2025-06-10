class Solution {
public:
    int maxDifference(string s) {
        vector<int> v(26,0);
        for(char c:s){
            v[c-'a']++;
        }
        int o=0;
        int e=INT_MAX;
        for(int i:v){
            if(i!=0&&i%2==0){
                e=min(e,i);
            }
            else if(i%2!=0){
                o=max(o,i);
            }
        }
        return o-e;
    }
};