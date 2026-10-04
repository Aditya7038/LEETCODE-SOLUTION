class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int buy = prices[0];

        int ans = 0;

        for(int i = 1;i<n;i++){

            int profit = prices[i]- buy;

            if(prices[i]<buy) buy = prices[i];

            if(profit > ans) ans = profit;
        }

        return ans;


    }
};
