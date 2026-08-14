class Solution {
public:


    void reverse (vector<int>& v1, int a, int b){

            for(int i = a ,  j = b ; i<j ; i++,j--){

                swap(v1[i] , v1[j]);

            }
    }


    void rotate(vector<int>& nums, int k) {



  if(k>=nums.size()) {

    k = k % nums.size();
    
    }

    if (k==0) return;

    int start_index;
    int end_index;

    
     reverse(nums ,start_index = 0 , end_index = nums.size()-k -1);
    
     reverse(nums ,start_index = nums.size() -k , end_index = nums.size()-1);

     reverse(nums ,start_index = 0 , end_index = nums.size() -1);
    

       
        }

   


    
        
    


};