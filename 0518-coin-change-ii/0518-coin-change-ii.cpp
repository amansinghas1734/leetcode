class Solution {
public:
    int  v[5002][302];
    int solve(vector<int>& c, int a,int j){
        if(a==0){
            return 1;
        }
        if(a<0||j>=c.size()){
            return 0;
        }
        if(v[a][j]!=-1){
            return v[a][j];
        }
        return v[a][j]=solve(c,a-c[j],j)+solve(c,a,j+1);
    }
    int change(int amount,vector<int>& coins) {
        memset(v,-1,sizeof(v));
        return solve(coins,amount,0);
    }
};