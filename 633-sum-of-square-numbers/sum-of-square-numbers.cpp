class Solution {
public:
    bool judgeSquareSum(int c) {


        for(long long a = 0;a<=sqrt(c);a++){
            
            int low = 0;
            int high = sqrt(c);

            long long ans  = (long long)(c - a*a);

            for(;low<=high;){

                long long mid = low + (high - low)/2;

                if(ans==mid*mid) return true;

                if(ans > mid * mid) {

                    low = mid + 1;
                }

                else{
                    high = mid -1;
                }
            }
 
        }
        
        return false;


       
    }
};