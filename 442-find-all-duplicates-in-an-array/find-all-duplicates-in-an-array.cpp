class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {


        int n = nums.size();

        vector<int>v1;

        for(int i = 0; i<n ; i++){

            if(nums[abs(nums[i])-1] < 0 ) {

                if(nums[i]<0) v1.push_back(nums[i] * -1);
                else v1.push_back(nums[i]);

                continue;
            }

            nums[abs(nums[i])-1] *= -1; 
        }

        return v1;
        
    }
};