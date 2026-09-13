class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans=0;
        int f=0;
        sort(people.begin(),people.end());
        for(int i=0;i<people.size();i++){
            if(people[i]==-1){
                continue;
            }
            int j=people.size()-1;
            while(i<j){
                if(people[j]==-1){
                    j--;
                    continue;
                }
                if(people[i]+people[j]<=limit){
                    ans++;
                    people[i]=-1;
                    people[j]=-1;
                    f+=2;
                    break;
                }
                else{
                    j--;
                }
            }
        }
        cout<<f;
        return ans+(people.size()-f);
    }
};