class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0;i<n;i++){

            
            if(nums[abs(nums[i])-1] < 0) continue;

            nums[abs(nums[i])-1] *= -1;

        }

        vector<int> v1;

        for(int i= 0;i<n;i++){

            if(nums[i] >0){

                v1.push_back(i+1);
            }
        }

        return v1;
        
    }
};