class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int,int> m;
        for(int x:nums){
            if(x>=0){
                m[x%value]++;
            }
            else{
                x*=-1;
                x%=value;
                x=(value-x)%value;
                m[x]++;
            }
        }
        int i=0;
        while(true){
            if(m[i%value]>0){
                m[i%value]--;
            }
            else{
                return i;
            }
            i++;
        }
    }
};