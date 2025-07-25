class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int> s;
        int ans=0;
        int t=INT_MIN;
        for(int x:nums){
            t=max(t,x);
            if(x>0&&s.find(x)==s.end()){
                ans+=x;
                s.insert(x);
            } 
        }
        if(ans==0){
            return t;
        }
        return ans;
    }
};