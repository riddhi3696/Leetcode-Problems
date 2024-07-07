class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        if(numBottles<numExchange){
            return numBottles;
        }

        int ext = 0;

        int full = numBottles;
        int emp = full;

        while(emp >= numExchange){
            full = emp/numExchange;
            emp = emp%numExchange + full;
            ext = ext + full;
        }

        return numBottles + ext;
    }
};
