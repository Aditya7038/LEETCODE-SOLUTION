 void flip( vector<vector<int>> &grid , int &j){


    for(int k = 0 ; k<grid[0].size();k++){

    if(grid[j][k] == 1) grid[j][k] = 0;
    else grid[j][k] = 1;

    }

 }


class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        int sum = 0;

    // make 1st column 0

    for(int i= 0 ; i<1;i++){

        for (int j = 0 ; j<m; j++){

            if(grid[j][i] == 0) flip(grid,j);
             
        } 
        
    }
   
   // count frequencu of 0 ,1

    for(int i = 1; i < n ; i++){

        int count_z = 0;
        int count_one =0;

        for(int j = 0 ; j<m ; j++){

            if(grid[j][i] == 0) count_z++;
            else count_one ++;


        }

        if(count_one>=count_z)  sum += pow(2,n-i-1)*count_one;
        else sum += pow(2,n-i-1)*count_z;




    }

    return sum + pow(2,n-1)*m;


        
    }
};