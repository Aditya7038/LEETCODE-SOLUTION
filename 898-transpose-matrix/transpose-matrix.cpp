class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int m = matrix.size();// rows

        int n = matrix[0].size();// columns

        vector<vector<int>> T(n,vector<int>(m));

        for(int i = 0 ; i<n ; i++){

            for(int j = 0 ; j<m;j++){

                T[i][j] = matrix[j][i];
            }
        }

        return T;


        
    }
};