class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        for(int i=-1*(n/2);i<=n/2;i++){
            if(i!=0){
                ans.push_back(i);
            }
        }
        if(n%2==1){
            ans.push_back(0);
        }
        return ans;
    }
};