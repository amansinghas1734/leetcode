class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m=strs.size();
        int n=strs[0].length();
        int ans=0;
        vector<bool> alrSor(m-1,false);
        for(int i=0;i<n;i++){
            bool del=false;
            for(int j=1;j<m;j++){
                if(!alrSor[j-1]&&strs[j][i]<strs[j-1][i]){
                    ans++;
                    del=true;
                    break;
                }
            }
            if(!del){
                for(int j=0;j<m-1;j++){
                    if(strs[j][i]<strs[j+1][i]){
                        alrSor[j]=true;
                    }
                }
            }
        }
        return ans;
    }
};