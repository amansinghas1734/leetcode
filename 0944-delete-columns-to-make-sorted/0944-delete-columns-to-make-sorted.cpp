class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs[0].length();
        int ans=0;
        for(int i=0;i<n;i++){
            char c=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]<c){
                    ans++;
                    break;
                }
                c=strs[j][i];
            }
        }
        return ans;
    }
};