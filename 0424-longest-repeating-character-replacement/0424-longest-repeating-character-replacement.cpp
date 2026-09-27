class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> v(26,0);
        int ans=0;
        int i=0,j=0;
        while(i<=j&&j<s.length()){
            int ma=0;
            for(int k=0;k<26;k++){
                ma=max(ma,v[k]);
            }
            if(j-i+1-ma>k+1){
                v[s[i]-'A']--;
                i++;
            }
            else{
                v[s[j]-'A']++;
                ans=max(ans,j-i);
                j++;
            }
        }
        int ma=0;
        for(int k=0;k<26;k++){
            ma=max(ma,v[k]);
        }
        if(j-i-ma<k+1){
            cout<<i<<'-'<<j<<endl;
            ans=max(ans,j-i);
        }
        return ans;
    }
};