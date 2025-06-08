class Solution {
public:
    void getVal(int i,vector<int>& v,int n){
        if(i>n){
            return;
        }
        else{
        v.push_back(i);
        i=i*10;
        getVal(i,v,n);
        for(int j=1;j<=9;j++){
            getVal(i+j,v,n);
        }}
    }
    vector<int> lexicalOrder(int n) {
        vector<int> v;
        for(int i=1;i<=9;i++){
            getVal(i,v,n);
        }
        return v;
    }
};