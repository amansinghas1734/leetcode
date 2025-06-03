class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        int ans=0;
        queue<int> pq;
        int n=status.size();
        vector<int> v(n,0);
        for(int i:initialBoxes){
            if(status[i]==1){
                pq.push(i);
            }
            else{
                v[i]=1;
            }
        }
        while(!pq.empty()){
            int x=pq.front();
            pq.pop();
            ans+=candies[x];
            for(int i:keys[x]){
                status[i]=1;
                if(v[i]==1){
                    v[i]=0;
                    pq.push(i);
                }
            }
            for(int i:containedBoxes[x]){
                if(status[i]==1){
                    pq.push(i);
                }
                else{
                    v[i]=1;
                }
            }
        }
        return ans;
    }
};