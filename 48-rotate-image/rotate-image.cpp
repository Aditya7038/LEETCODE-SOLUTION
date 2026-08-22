void transpose(vector<vector<int>>& matrix,int n) {

       for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if(j>i){

            swap(matrix[i][j],matrix[j][i]);
            }
        }
       }
}

        
void reversing (vector<vector<int>>& matrix , int n ){

      for (int i = 0 ; i < n; i++) {

        int k = n - 1;

        for (int j = 0; j < n; j++) {

            if(k<j) break;
            
            swap(matrix[i][j],matrix[i][k]);
            k--;

            
        }
      }


   
}




class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        transpose(matrix,n);

        reversing(matrix,n);

   
        
        
    }
};