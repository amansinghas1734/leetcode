class Solution {
public:
    int minOperations(string s) {
        string t=s;
        int n=s.length()-1;
        sort(t.begin(),t.end());
        if(t==s){
            return 0;
        }
        if(n==0){
            return -1;
        }
        if(n==1){
            return -1;
        }
        int a=-1,b=-1;
        for(int i=0;i<=n;i++){
            if(s[i]==t[0]&&a==-1){
                a=i;
            }
            if(s[i]==t[n]){
                b=i;
            }
        }
        if(a==0&&b==n){
            return 1;
        }
        if(a==0||b==n){
            return 1;
        }
        if(a==n&&b==0){
            return 3;
        }
        return 2;
    }
};