

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        if(n==1) return nums[0];

        int best = nums[0] ;

        int sum = nums[0];


        for(int i = 1; i<n;i++){

            if(sum<=0) sum = 0;

            sum = sum + nums[i];

            best = max(best,nums[i]);

            best = max(best,sum);

            
        }

    
    return best;

    }
};