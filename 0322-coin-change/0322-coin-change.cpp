class Solution {
public:
    int t[10001][13];
    int solve(vector<int>& c, int a,int i){
        if(a==0){
            return 0;
        }
        if(a<0||i>=c.size()){
            return INT_MAX-1;
        }
        if(t[a][i]!=-1){
            return t[a][i];
        }
        return t[a][i]=min(1+solve(c,a-c[i],i),solve(c,a,i+1));
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(t,-1,sizeof(t));
        int x=solve(coins,amount,0);
        return x>=INT_MAX-1?-1:x;
    }
};