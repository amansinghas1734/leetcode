class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n=0;
        for(int i=0;i<logs.size();i++){
            if(logs[i]=="./"){
                continue;
            }
            else if(logs[i]=="../"){
                if(n>0){
                    n--;
                }
            }
            else{
                n++;
            }
        } 
        return n;
    }
};