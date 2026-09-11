class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i!=j&&j!=k&&k!=i){
                    int x=digits[i]*100+digits[j]*10+digits[k];
                    if(x%2==0&&s.find(x)==s.end()&&digits[i]!=0){   
                        s.insert(x);
                    }
                    }
                }
            }
        }
        return s.size();
    }
};