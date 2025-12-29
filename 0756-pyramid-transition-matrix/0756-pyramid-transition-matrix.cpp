class Solution {
public:
    unordered_map<string, bool> memo;
    void findPos(string crr, int i, string bottom, vector<string>& pos, vector<vector<vector<char>>>& v){
        if(crr.length()==bottom.length()-1){
            pos.push_back(crr);
            return;
        }
        if(i>=bottom.length()){
            return;
        }
        for(char c:v[bottom[i-1]-'A'][bottom[i]-'A']){
            findPos(crr+c,i+1,bottom,pos,v);
        }

    }
    bool solve(string bottom,vector<vector<vector<char>>>& v){
        if(bottom.size()==1){
            return true;
        }
        if (memo.count(bottom)) return memo[bottom];
        bool ans=false;
        vector<string> pos;
        string crr="";
        findPos(crr,1,bottom,pos,v);
        for (string &next : pos) {
            if (solve(next, v)) {
                return memo[bottom] = true;
            }
        }

        return memo[bottom] = false;
    }
    bool pyramidTransition(string bottom, vector<string>& allowed) {
        vector<vector<vector<char>>> v(26,vector<vector<char>>(26));
        for(string s:allowed){
            v[s[0]-'A'][s[1]-'A'].push_back(s[2]);
        }
        return solve(bottom,v);
    }
};