class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

       

int r1 = matrix.size();
int c1 = matrix[0].size(); 

 vector<int> v1;

int min_c = 0, max_c = c1 - 1;
int min_r = 0, max_r = r1 - 1;

int total_elements = c1 * r1 ;
int count=0;

for(;count<=total_elements;){

    
// right 
    for(int j = min_c ; j<=max_c;j++){

        
        
        v1.push_back(matrix[min_r][j]);

        count++;
    }

    min_r++;

    if(count>=total_elements) break;

    

   

// down     

    for(int k = min_r ; k<=max_r;k++){

        
        v1.push_back(matrix[k][max_c]);
        count++;
        
    } 
    if(count>=total_elements) break;


    max_c--;
    

   

//left    


    for(int l = max_c ; l>=min_c;l--){

        

        
        v1.push_back(matrix[max_r][l]);
        count++;
        
    } 
    if(count>=total_elements) break;

    
    max_r--;
    


// up    

    for(int m = max_r ; m>=min_r; m--){

        
        
        v1.push_back(matrix[m][min_c]);
        count++;
        
    } 

    if(count>=total_elements) break;
    min_c++;
    



}


return v1;
        
    }
};