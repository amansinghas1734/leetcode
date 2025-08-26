class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double d=0;
        int ar=0;
        for(auto x:dimensions){
            int a=x[0];
            int b=x[1];
            double d2=sqrt(a*a+b*b);
            int ar2=a*b;
            if(d2==d){
                    ar=max(ar,ar2);
            }
            if(d2>d){
                d=d2;
                ar=ar2;
            }
        }
        return ar;
    }
};