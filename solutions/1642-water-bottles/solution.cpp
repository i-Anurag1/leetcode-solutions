class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        if(numBottles == 0) return 0;
        
        int total = numBottles;
        int empty = numBottles;
        
        while(empty >= numExchange){
            
            int newBottles = empty / numExchange;
            total = total + newBottles;
            
            int rem = empty % numExchange;
            empty = newBottles + rem;
        }
        
        return total;
    }
};
