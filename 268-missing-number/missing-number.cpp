class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        int original_sum = n * (n+1)/2;

        int sum=0;

        for(int i  = 0; i<n;i++){

            sum = sum + nums[i];
        }

        return original_sum - sum;
        
    }
};