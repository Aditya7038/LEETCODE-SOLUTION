class Solution {
public:
    int alternateDigitSum(int n) {


        int size = log10(n) + 1;

        

        int sum =0;

        int j = 1;

        

        if(size%2==0) j=-1;

        for(;n!=0;){

            int lastdigit = n % 10;

            sum = sum + lastdigit * j;

            n = n/10;

            j = -j ;


        }

        return sum;
        
    }
};