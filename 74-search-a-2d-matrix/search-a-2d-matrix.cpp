class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();


        if(target == matrix[0][0]) return true;
        if(target == matrix[m-1][n-1])  return true;

        if((target >matrix[m-1][n-1]) || (target<matrix[0][0])) return false;

        int low = 0;
        int high = m*n -1;

        int mid ;
        int row_no,col_no;

        for(int i = 0 ; low<=high; i++){

            mid = (low + high) / 2 ; 

            row_no = mid / n;

            col_no =  mid % n ;

            if(matrix[row_no][col_no] == target )  return true;

            if (matrix[row_no][col_no] < target)  low = mid + 1;

            if(matrix[row_no][col_no] > target )  high = mid -1;;

            

        }

        return false;

        
    }
};