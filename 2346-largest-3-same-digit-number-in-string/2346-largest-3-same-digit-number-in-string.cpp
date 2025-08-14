class Solution {
public:
    string largestGoodInteger(string num) {
        int x=-1;
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1]&&num[i]==num[i+2]){
                x=max(x,stoi(num.substr(i,3)));
            }
        }
        if(x==-1){
            return "";
        }
        else if(x==0){
            return "000";
        }
        else{
            return to_string(x);
        }
    }
};