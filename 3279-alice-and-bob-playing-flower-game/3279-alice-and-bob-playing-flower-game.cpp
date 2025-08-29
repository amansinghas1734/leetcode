class Solution {
public:
    long long flowerGame(int n, int m) {
        long long ans=0;
        long long o1=(m+1)/2;
        long long o2=(n+1)/2;
        ans+=(o1*(n-o2));
        ans+=(o2*(m-o1));
        return ans;
    }
};