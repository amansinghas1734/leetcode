class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int d=0;
        int x=0;
        int p=0;
        while(numBottles+x>=numExchange){
            d+=numBottles;
            x=(numBottles+x)%numExchange;
            numBottles=(numBottles+p)/numExchange;
            p=x;
        }
        return d+numBottles;
    }
};