class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long totalcost = 0;
         

            if(costBoth > cost1 + cost2){

                totalcost += ((long long)need1 * cost1)  + ((long long)need2 * cost2);

            }

            else{

                int temp = min(need1,need2);

                totalcost += (long long)costBoth * (temp);

                

                if(temp == need1){

                     totalcost += (need2 - need1) * (long long)min(cost2,costBoth);

                }

                else {

                 totalcost += (need1 - need2) * (long long)min(cost1,costBoth);
                    
                }
                
            }

        return totalcost;
        
    }
};