class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int n = accounts[0].size();
        int m = accounts.size();

        int maxsum = INT_MIN;


        for(int i = 0 ; i<m;i++) {

            int sum = 0;

            for (int j = 0 ; j<n;j++){

                sum += accounts[i][j];

            }

            if(sum>maxsum) maxsum = sum;


        }

        return maxsum;
        
    }
};