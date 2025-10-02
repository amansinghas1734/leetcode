class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles;
        long long nb=ans;
        while(nb>=numExchange){
            ans++;
            nb-=(numExchange-1);
            numExchange++;
        }
        return ans;
    }
};