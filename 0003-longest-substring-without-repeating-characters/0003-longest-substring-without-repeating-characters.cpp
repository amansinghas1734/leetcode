class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        unordered_map<char,int> m;
        int ans=0;
        while(j<s.length()){
            if(m[s[j]]>0){
                ans=max(ans,j-i);
                while(i<j&&s[i]!=s[j]){
                    m[s[i]]=0;
                    i++;
                }
                i++;
                m[s[j]]=0;
            }
            m[s[j]]++;
            j++;
        }
        ans=max(ans,j-i);
        return ans;
    }
};