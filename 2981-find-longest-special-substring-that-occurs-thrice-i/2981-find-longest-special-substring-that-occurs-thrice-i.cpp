class Solution {
public:
    int maximumLength(string s) {
        int n=s.length();
        vector<vector<int>> v(26,vector<int>(n+1,0));
        int i=0,j=0;
        int ans=-1;

        while(j<n){
            while(j<n&&s[j]==s[i]){
                j++;
            }
            int len=j-i;
            for(int k=1;k<=len;k++){
                v[s[i]-'a'][k]+=len-k+1;
                if(v[s[i]-'a'][k]>=3){
                    ans=max(ans,k);
                }
            }

            i=j;
        }
        return ans;
    }
};