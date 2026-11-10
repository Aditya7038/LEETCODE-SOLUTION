class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        int sum = numBottles;

        if(numBottles < numExchange) return sum;

    
        for(;;){

            int temp = numBottles / numExchange;

            if(temp==0) break;

            sum += temp;

            numBottles = temp + numBottles % numExchange;

        }

        return sum;
        
    }
};