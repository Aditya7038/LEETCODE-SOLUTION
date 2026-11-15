class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        vector<float> averages;

        int i = 0;

        int n = nums.size();

        int j = n-1;

        float min = float(nums[0] + nums[n-1]) / 2;

        for(;i<n/2;i++,j--){

            float avg = float(nums[i] + nums[j]) / 2;

            if(avg < min ) min = avg;

            averages.push_back(avg);
        }

        return min;
        
    }
};