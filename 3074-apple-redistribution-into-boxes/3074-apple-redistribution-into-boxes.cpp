class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int s=accumulate(apple.begin(),apple.end(),0);
        if(s==0){
            return 0;
        }
        sort(capacity.rbegin(),capacity.rend());
        int su=0;
        for(int i=0;i<capacity.size();i++){
            su+=capacity[i];
            if(su>=s){
                return i+1;
            }
        }
        return -1;
    }
};