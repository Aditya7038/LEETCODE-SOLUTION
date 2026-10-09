class Solution {
public:
    int mySqrt(int x) {

        int low = 0;
        int high = x;

        int ans = 0;

        if (x==1) return 1;

        for( ; low<=high; ){

            long long mid = low + (high - low)/2 ;

           

            if(mid*mid > x){

                high = mid-1;
            }
           
            else {

                if(ans==mid) return ans;

                ans = mid;

                low = mid + 1;
            }
            
        }

        return ans;

    }
        
    
};