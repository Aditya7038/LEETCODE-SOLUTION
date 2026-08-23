class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector <vector<int>> v ;
        
        // build shape of pascal triangle

        for(int i = 0; i<numRows ; i++){

            vector <int>v1(i+1);
            v.push_back(v1);
             
            for(int j = 0;j<=i; j++){

                if(j==0 || (i == j)){

                    v[i][j] = 1;
                }
                else{
                    v[i][j] = v[i-1][j] + v[i-1][j-1];
                }
            }
            
            
            
        }

        
        return v;
    






        }
        
    
};