class Solution {
public:
    int findClosest(int x, int y, int z) {
        return (abs(z-y)>abs(z-x))?1:(abs(z-y)==abs(z-x))?0:2;
    }
};