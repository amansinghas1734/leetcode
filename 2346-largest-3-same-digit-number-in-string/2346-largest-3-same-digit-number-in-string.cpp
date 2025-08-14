class Solution {
public:
    string largestGoodInteger(string num) {
        string s="";
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1]&&num[i]==num[i+2]){
                s=max(s,num.substr(i,3));
            }
        }
        return s;
    }
};