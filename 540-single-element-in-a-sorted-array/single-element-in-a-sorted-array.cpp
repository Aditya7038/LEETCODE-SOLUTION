class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        if(n==1) return nums[0];
        
        int low = 0;

        int high = n-1;

        int ans = 0;

        for(;low<=high;){

            int mid = low + (high - low)/2;

            if(mid == 0 && nums[mid + 1]!= nums[mid]) return nums[mid];

            if(mid == 0 && nums[mid - 1]!= nums[mid]) return nums[mid];

            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){

                return nums[mid];
            }

            if(nums[mid]==nums[mid-1]){

                if((mid+1) % 2 != 0){

                    high = mid ;

                }

                else {

                    low = mid + 1 ;
                }
            }

            else{

                if((mid + 1) % 2 ==0){

                    high = mid ;

                }

                else{

                    low = mid + 1;
                }
            }

           



        }

        return ans;
    }
};