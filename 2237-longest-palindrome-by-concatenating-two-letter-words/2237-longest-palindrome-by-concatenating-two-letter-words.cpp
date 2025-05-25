class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int f=0;
        int ans=0;
        unordered_map<string,int> m;
        for(auto x:words){
            string y=x;
            reverse(y.begin(),y.end());
            if(m[y]>0){
                ans+=2;
                m[y]--;
                if(y[0]==y[1]){
                    f--;
                }
            }
            else{
                if(x[0]==x[1]){
                    f++;
                }
                m[x]++;
            } 
        }
        if(f>0){
            ans++;
        }
        return 2*ans;
    }
};