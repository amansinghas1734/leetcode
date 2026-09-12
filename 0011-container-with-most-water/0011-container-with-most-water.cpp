class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            m=max(m, min(height[i],height[j])*(j-i));
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
    return m;
    }
};