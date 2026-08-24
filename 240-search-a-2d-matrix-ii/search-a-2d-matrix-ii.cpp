class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();

        int largest = matrix[m-1][n-1];
        int lowest = matrix[0][0];

       
        if ((target == matrix[m-1][n-1]) || (target == matrix[0][0]) ) return true;


        else if ((target > matrix[m-1][n-1]) || (target < matrix[0][0]) ) return false;

        int i = m-1;

            for (int j =0;; ){

                if((i<0) || (j > n-1)) 
                return false ;
                 

                if(target==matrix[i][j]) 
                    return true;
                    


                if(matrix[i][j]<target) j++; // move right
                else if(matrix[i][j]>target) i--; // move up
            }
    
    

   
    }
};