class Solution {
public:
    int search(vector<int>& nums, int target) {

        
        int n = nums.size();

        

  
        int low = 0;

        int high = n-1;

        int ans = -1;

        for(;low<=high;){

            int mid = low + (high-low)/2 ;


            if(nums[mid]== target) return mid;
            

            if(nums[low] <= nums[mid]){


                if(target < nums[mid] && target >= nums[low]){

                    high = mid - 1;
                }

                else{ 

                    low = mid + 1;
                }
            }

            else{

                    if(target <= nums[high] && target > nums[mid]){

                        ans = mid;

                        low = mid + 1;
                    }

                    else{

                    high = mid -1;
                    }
        
            }

        }

        if(ans!=-1 && nums[ans]!=target) ans = -1;

          
        return ans;
        
    }
};