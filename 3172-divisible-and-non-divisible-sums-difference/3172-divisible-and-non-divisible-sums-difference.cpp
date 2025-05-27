class Solution {
public:
    int differenceOfSums(int n, int m) {
        int s=n*(n+1)/2;
        int x=n/m;
        return s-(2*m*x*(x+1)/2);
    }
};