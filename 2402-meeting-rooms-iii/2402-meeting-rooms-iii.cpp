class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int i=0;
        vector<long long> rooms(n,0);
        vector<long long> count(n,0);
        while(i<meetings.size()){
            int t=0;
            int j;
            for(j=0;j<rooms.size();j++){
                if(rooms[j]<=meetings[i][0]){
                    rooms[j]=meetings[i][1];
                    count[j]++;
                    break;
                }
                if(rooms[t]>rooms[j]){
                    t=j;
                }
            }
            if(j==rooms.size()){
                rooms[t]+=meetings[i][1]-meetings[i][0];
                count[t]++;
            }
            i++;
        }
        int t=0;
        for(i=1;i<n;i++){
            if(count[t]<count[i]){
                t=i;
            }
        }
        return t;
    }
};