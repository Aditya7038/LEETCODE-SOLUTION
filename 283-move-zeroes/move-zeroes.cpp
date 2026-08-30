class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();


        int k =0;

        for(int i = k;i<n-1 ;i++){

            if(i>=n-1) break;

            if (nums[i] == 0){

        for (int j = i+1;;j++){

            if (nums[j]==0) ;

            else{
                 swap(nums[i], nums[j]);
                 break;     
                 }

            if (j>=n-1) break;     

        }


        }
        }

        
        
        
        
        
    }
};