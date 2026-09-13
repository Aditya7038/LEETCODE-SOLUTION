class Solution {
public:
    int mySqrt(int x) {

        int low = 0;
        int high = x;

        int temp = 0;

        if (x==1) return 1;

        for( ; ; ){



            long long mid = low + (high - low)/2 ;

            if(mid*mid > x) {

                high = mid;
            }

            else {

                if(temp==mid) return temp;

                low = mid;

                temp =mid;


            }







          

            }

        }
        
    
};