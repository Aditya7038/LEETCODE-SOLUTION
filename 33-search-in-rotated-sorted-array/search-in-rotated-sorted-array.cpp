class Solution {
public:
    int search(vector<int>& nums, int target) {

        

       
        int n = nums.size();

        
        
        
        int low = 0;

        int high = n-1;

        int helper = -1;

        for(;low<=high;){

            int mid = low + (high-low)/2 ;

            if(nums[mid] >= nums[0]){

                helper = mid;

                low = mid + 1 ;

            }

            if(nums[mid] < nums[0]){

                high = mid - 1 ; 
            }
        }


        if(target >= nums[0] && target <= nums[helper]){

            low = 0;
            high = helper;
        }

        else{ 
            low = helper + 1;
            high = n-1;
        }

        int ans = -1;

        for(;low<=high;){

            int mid = low + (high-low)/2 ;

            if(target >= nums[mid]){

                ans = mid;

                low = mid +1;

            }

            else{

                high = mid - 1;
            }
        }

        if(ans!=-1 && nums[ans]!=target) ans = -1;

        return ans;
        
    }
};