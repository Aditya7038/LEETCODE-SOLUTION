class Solution {
public:
    long long countCommas(long long n) {

        if(n<1000) return 0;

        long long x = 1 ,y = 1000,comma = 0;

        int multiplier = 0;


        for (;;){
 

            if(n>=x && n<y){

              return (n - x + 1) * multiplier + comma;

                break;
            }

            else{

            comma = comma + (y-x) * multiplier;
             multiplier++;
                x = x*pow(10,3);
                y = y*pow(10,3);
            }
                
            

         

        }



    }
};