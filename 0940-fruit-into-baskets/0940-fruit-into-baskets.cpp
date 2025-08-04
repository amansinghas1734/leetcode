class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int c=1;
        int ldi=-1;
        int i=0,j=1;
        int x=fruits[0],y=-1;
        while(j<fruits.size()){
            if(fruits[j]!=x&&y==-1){
                y=fruits[j];
            }
            if(fruits[j]!=x&&fruits[j]!=y){
                if(fruits[ldi]==x){
                    x=fruits[j];
                }
                if(fruits[ldi]==y){
                    y=fruits[j];
                }
                i=ldi+1;
            }
            c=max(c,j-i+1);
            if(fruits[j-1]!=fruits[j]) ldi=j-1;
            j++;
        }
        return c;
    }
};