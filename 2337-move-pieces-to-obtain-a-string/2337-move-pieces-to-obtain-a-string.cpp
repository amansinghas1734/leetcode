class Solution {
public:
    bool canChange(string start, string target) {
        int n=start.length();
        for(int i=0, j=0; i<n||j<n;i++, j++){
            while(start[i]=='_') i++;
            while(target[j]=='_') j++;
            char c=start[i];
            if(c!=target[j]) return false;
            if(c=='L'&&i<j) return false;
            if(c=='R'&&i>j) return false;
        }
        return true;
    }
};