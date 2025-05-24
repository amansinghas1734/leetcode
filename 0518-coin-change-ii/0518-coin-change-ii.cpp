class Solution {
public:
    int  v[5002][302];
    int solve(int a,vector<int>& c,int i){
        if(a==0){
            return 1;
        }
        if(a<0||i>=c.size()){
            return 0;
        }
        if(v[a][i]!=-1){
            return v[a][i];
        }
        return v[a][i]=solve(a-c[i],c,i)+solve(a,c,i+1);
    }
    int change(int amount,vector<int>& coins) {
        memset(v,-1,sizeof(v));
        return solve(amount,coins,0);
    }
};