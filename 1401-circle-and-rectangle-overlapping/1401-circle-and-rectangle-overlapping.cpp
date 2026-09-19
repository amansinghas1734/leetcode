class Solution {
public:
    bool checkOverlap(int r, int xcenter, int ycenter, int x1, int y1, int x2, int y2) {
        int xc=0;
        int yc=0;
        if(x1>xcenter){
            xc=x1;
        }
        else if(x2<xcenter){
            xc=x2;
        }
        else{
            xc=xcenter;
        }
        if(y1>ycenter){
            yc=y1;
        }
        else if(y2<ycenter){
            yc=y2;
        }
        else{
            yc=ycenter;
        }
        if(pow((xcenter-xc),2)+pow((ycenter-yc),2)<=r*r){
            return true;
        }
        return false;
    }
};