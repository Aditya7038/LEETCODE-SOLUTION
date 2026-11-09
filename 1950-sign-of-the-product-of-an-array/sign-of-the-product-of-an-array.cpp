class Solution {
public:
    int arraySign(vector<int>& nums) {

        int n = nums.size();

        int no_of_negatives = 0;

        for(int i = 0; i<n; i++){

            if(nums[i]<0) no_of_negatives++;

            if(nums[i]==0) return 0 ;


        }

        if(no_of_negatives % 2 != 0) return -1;

        else return 1;
        
    }
};