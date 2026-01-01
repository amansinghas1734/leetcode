class Solution {
public:
    void shift(vector<int>& digits,int l,int n){
        if(digits[l]==9){
            digits[l]=0;
            if(l>0){
            shift(digits,l-1,n);}
            else{
                vector<int> digit(n+1);
                digit[0]=1;
                digits=digit;
            }
        }
        else{
            digits[l]++;
        }
    }
    vector<int> plusOne(vector<int>& digits) {
        int l=digits.size();
        int n=l;
        l--;
        shift(digits,l,n);
        return digits;
    }
};