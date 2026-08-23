class Solution {
public:
    vector<int> getRow(int rowIndex) {


        vector <vector<int>> v ;
        
        // build shape of pascal triangle and fill

        for(int i = 0; i<=rowIndex ; i++){

            vector <int>v1(i+1); // size
            v.push_back(v1);
             
            for(int j = 0;j<=i; j++){

                if(j==0 || (i == j)){

                    v[i][j] = 1;
                }
                else{
                    v[i][j] = v[i-1][j] + v[i-1][j-1];
                }
            }

                if (i==rowIndex){
                    return v[i];
                }
                
            
            
            
            
        }

        
    
    return {};
    }
        
        
    
};
        
