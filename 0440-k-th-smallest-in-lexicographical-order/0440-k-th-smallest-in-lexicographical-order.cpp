class Solution {
public:
    int countNum(long crr,long next,int n){
        int count=0;
        while(crr<=n){
            count+=next-crr;
            crr*=10;
            next=min(next*10,long(n+1));
        }
        return count;
    }
    int findKthNumber(int n, int k) {
        int crr=1;
        k--;
        while(k>0){
            int count=countNum(crr,crr+1,n);
            if(count<=k){
                crr++;
                k-=count;
            }else{
                crr*=10;
                k-=1;
            }
        }
        return crr;
    }
};