class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        string a=max(arriveAlice,arriveBob);
        string b=min(leaveAlice,leaveBob);
        int ans=0;
        int m1=(a[0]-'0')*10+a[1]-'0';
        int m2=(b[0]-'0')*10+b[1]-'0';
        if(m1>m2){
            return 0;
        }
        for(int i=m1;i<m2-1;i++){
            ans+=days[i];
        }
        int d1=(a[3]-'0')*10+a[4]-'0';
        int d2=(b[3]-'0')*10+b[4]-'0';
        if(m1==m2){
            if(d2<d1){
                return 0;
            }
            return d2-d1+1;
        }
        ans+=days[m1-1]-d1+1;
        ans+=d2;
        return ans;
    }
};