class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        int n = nums.size();

        if(n==0|| n==1) return nums;

        int i = 0;

        int j = n-1;

        for(;i<j;){

            if(nums[i]%2==0){

                i++;
            }
            if(nums[j]%2!=0){

                j--;
                continue;
            }

            if(nums[i]%2!=0 && nums[j]%2==0){

                swap(nums[i],nums[j]);
                i++;
                j--;
            }

        }

        return nums;


        
    }
};