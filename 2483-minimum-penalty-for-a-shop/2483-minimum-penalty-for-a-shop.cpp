class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int> yes(n+1,0);
        vector<int> no(n+1,0);
        for(int i=1;i<n+1;i++){
            no[i]=no[i-1]+(customers[i-1]=='N'?1:0);
        }
        for(int i=n-1;i>=0;i--){
            yes[i]=yes[i+1]+(customers[i]=='Y'?1:0);
        }
        
        int a=INT_MAX;
        int ans=0;
        for(int i=0;i<=n;i++){
            if(yes[i]+no[i]<a){
                a=yes[i]+no[i];
                ans=i;
            }
        }
        return ans;
    }
};