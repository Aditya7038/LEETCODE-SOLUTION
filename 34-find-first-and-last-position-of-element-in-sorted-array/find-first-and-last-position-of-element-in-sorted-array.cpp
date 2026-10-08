int startidx(vector<int>& nums, int target){

    int n = nums.size();

    int ans  = -1 ;
    int low = 0, high = n - 1;

    for(;low <= high;) {

        int mid = low + (high - low) / 2;

         if(high -low ==1 || high-low ==0) {

            if(nums[low]==target){

                ans = low;
                break;
            } 
            else{
                ans = high;
                break;
            }

        }

        if (nums[mid] >= target) {   

            high = mid ;
        }

         else low = mid + 1;
        
    }

    if(nums[ans]!=target) ans = -1;

    return ans;

}

int endidx(vector<int>& nums, int target){

    int n = nums.size();


    int ans  = -1 ;
    int low = 0, high = n - 1;

    for(;low <= high;) {

        int mid = low + (high - low) / 2;

        if(high -low ==1 || high-low ==0) {

            if(nums[high]==target){

                ans = high;
                break;
            } 

            else{
                ans = low;
                break;
            }

        }

        if (nums[mid] == target) low = mid;

        else if (nums[mid] > target) {   

            high = mid-1;
        }

         else low = mid + 1;
        
    }

    if(nums[ans]!=target)ans = -1;

    return ans;
}



class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();

        if(n==0) return {-1,-1};

        if(n==1) {

            if(nums[0]==target)
            return {0,0};
        

        else return {-1,-1};
        }

        int a  = startidx(nums,target);

        int b =  endidx(nums,target);

       
        return {a,b};
        
    }
};