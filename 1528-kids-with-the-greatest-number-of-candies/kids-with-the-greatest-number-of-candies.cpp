class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int n = candies.size();

        int max = candies[0];

        for(int i = 1; i<n; i++){

            if(candies[i]>max) max = candies[i];
        }

        vector<bool> v(n);

        for(int i = 0; i<n ; i++){

            if(candies[i] + extraCandies >= max) {
                v[i] = true;
            }

            else v[i] = false;
        }

        return v;
        
    }
};