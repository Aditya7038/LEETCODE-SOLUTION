class Solution {
public:
    bool judgeSquareSum(int c) {


        long long low = 0;
        long long high = sqrt(c);

        for(;low<=high;){

            if(low *low + high * high == c) return true;

            if(low *low + high * high > c){

                high--;
            }

            else  low++;
        }


      
        
        return false;


       
    }
};