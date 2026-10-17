class Solution {
public:
    bool isPerfectSquare(int num) {


        int low = 1;
        int high = num;

        for(;low<=high;){

            long long mid = low + (high - low)/2;

            if(mid * mid ==num) return true;

            if(mid * mid < num){

            
                low = mid + 1;
            }

            else{

                high = mid-1;
            }
        }

        return false;
        
    }
};