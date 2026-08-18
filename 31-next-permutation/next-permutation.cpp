class Solution {

public:  


    void reverse(int i,int j,vector<int>& nums){

        for( ;i<j;i++,j--)swap(nums[i],nums[j]);

    }



    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        int x;

        for(int i = n -2;;i--){

            if(i<0){

                reverse(0,n-1,nums);

                break;

            }

            if(nums[i]<nums[i+1]){

                reverse(i+1,n-1,nums);

                for(int j = i+1;j<=n-1;j++){

                  if(nums[j]>nums[i]) {

                  x = j;

                  break;

                }  
                }



                swap(nums[i],nums[x]);



                break;





            }

        }

       

    }

    

}; 

