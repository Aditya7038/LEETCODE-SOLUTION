class Solution {
public:
    int countElements(vector<int>& nums) {

        int n = nums.size();

        int max = INT_MIN;

        int min = INT_MAX;

        int count_min = 0;

        int count_max = 0;

        if(n==1) return 0;

        for(int i = 0; i<n; i++){

            if(nums[i]==min) count_min++;

            if(nums[i] < min){

                min = nums[i];
                count_min = 1;
            }


            if(nums[i]==max) count_max++;

            if(nums[i] > max){

                max = nums[i];
                count_max = 1;
            }


        }

        int ans = n - count_min - count_max;

        if(abs(ans)>n-2) return 0;

        return ans;
        
    }
};