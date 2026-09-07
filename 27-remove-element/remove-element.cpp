class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        

        int n = nums.size();


        int j = n-1;

        bool flag = false;


        for(int i = 0; i<=j;){

            if(j<0) break;

            if(nums[j]==val){
             j--;
             continue;
            }

            if(nums[i]==val ) {

                nums[i]= nums[j];
                j--;
                i++;
            }
            else{i++;}


        }
       
    

        return j+1;
    }

      
};