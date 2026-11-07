class Solution {
public:
    int countElements(vector<int>& nums) {

        int n = nums.size();

        int min = nums[0];

        int max = nums[0];

        

        for(int i = 0; i<n; i++){

            if(nums[i]>max) max = nums[i];

            if(nums[i]<min) min = nums[i];


        }

        int count = 0;

        for(int i = 0; i<n; i++){

            if(nums[i]<max && nums[i]>min) count++;


        }

        return count;
        
    }
};