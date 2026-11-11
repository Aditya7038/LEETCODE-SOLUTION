class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long totalcost = 0;


            if(need1 == 0){

                if(cost2 > costBoth){

                    totalcost += (long long)need2 * costBoth;
                }

                else {

                    totalcost += (long long)need2 * cost2;
                }

                return totalcost;

            }

            if(need2 == 0){

                if(cost1 > costBoth){

                    totalcost += (long long)need1 * costBoth;
                }

                else {

                    totalcost += (long long)need1 * cost1;
                }

                return totalcost;

            }

            if(costBoth > cost1 + cost2){

                totalcost += ((long long)need1 * cost1)  + ((long long)need2 * cost2);

            }

            else{

                int temp = min(need1,need2);

                totalcost += (long long)costBoth * (temp);

                

                if(temp == need1){

                    if(cost2 < costBoth) totalcost += (need2 - need1) * (long long)cost2;

                    else totalcost += (need2 - need1) * (long long)costBoth;

                }

                else {

                    if(cost1 < costBoth) totalcost += (need1 - need2) * (long long)cost1;

                    else totalcost += (need1 - need2) * (long long)costBoth;
                }
                
            }

        return totalcost;
        
    }
};