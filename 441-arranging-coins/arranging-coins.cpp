class Solution {
public:
    int arrangeCoins(int n) {

     

        int low = 1 ; 
        int high = n;
        int ans = 0;

        long long  sum = 0;

        for(;low<=high;){

            int mid = low + (high - low)/2;

            sum = (long long)mid*(mid+1)/2;

            

            if(n<sum){

                high = mid -1;
            }

            else {
                ans = mid;
                low = mid + 1;
            }

            

        }

        return ans;
    
    }
};