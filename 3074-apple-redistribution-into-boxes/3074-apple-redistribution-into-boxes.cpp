class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int s=accumulate(apple.begin(),apple.end(),0);
        if(s==0){
            return 0;
        }
        sort(capacity.rbegin(),capacity.rend());
        for(int i=0;i<capacity.size();i++){
            s-=capacity[i];
            if(s<=0){
                return i+1;
            }
        }
        return -1;
    }
};