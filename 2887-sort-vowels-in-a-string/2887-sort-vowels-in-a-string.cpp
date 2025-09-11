class Solution {
public:
    string sortVowels(string s) {
        string cap="";
        string sm="";
        vector<int> pos;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                sm.push_back(c);
                pos.push_back(i);
            }
            else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                cap.push_back(c);
                pos.push_back(i);
            }
        }
        sort(cap.begin(),cap.end());
        sort(sm.begin(),sm.end());
        int i=0;
        int j=0;
        while(i<cap.length()){
            s[pos[j]]=cap[i];
            j++;
            i++;
        }
        i=0;
        while(i<sm.length()){
            s[pos[j]]=sm[i];
            j++;
            i++;
        }
        return s;
    }
};