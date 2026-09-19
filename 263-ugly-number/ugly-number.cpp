class Solution {
public:
    bool isUgly(int n) {

        if(n<=0) return false;

       for(;;){

        if(n%2==0){
            n = n/2;
        }

        else break;
       }

       for(;;){

        if(n%3==0){
            n = n/3;
        }

        else break;


       }

       for(;;){

        if(n%5==0){
            n = n/5;
        }

        else break;

       }

       if(n==1) return true;


       else return false;


        
    }
};