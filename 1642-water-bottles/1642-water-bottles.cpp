class Solution {
public:
    int numWaterBottles(int numBottles, int x) {
        int drink = 0;
        int n = numBottles;
        while((n/x)>0){
            drink += n/x;
            n = (n/x)+(n%x);

        }
        return drink+numBottles;
    }
};