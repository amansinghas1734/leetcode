class Solution {
public:
int t[5001][301];
    int solve(int a, vector<int>& c,int i){
        if(a==0){
            return 1;
        }
        if(a<0||i>=c.size()){
            return 0;
        }
        if(t[a][i]!=-1){
            return t[a][i];
        }
        return t[a][i]=solve(a-c[i],c,i)+solve(a,c,i+1);
    }
    int change(int amount, vector<int>& coins) {
        memset(t,-1,sizeof(t));
        return solve(amount,coins,0);
    }
};