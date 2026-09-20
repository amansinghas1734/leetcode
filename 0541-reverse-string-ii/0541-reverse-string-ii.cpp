class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        while(i<s.length()){
            int l=i,r=min((int)s.length()-1,i+k-1);
            while(l<r){
                swap(s[l],s[r]);
                l++;
                r--;
            }
            i+=2*k;
        }
        return s;
    }
};