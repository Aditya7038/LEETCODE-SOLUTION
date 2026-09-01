class Solution {
public:
    bool isPalindrome(int x) {

        if(x==0) return true;

        if(x<0) return false;

        int y =x;

       // int n = log10(x) + 1; // count digits , dont trust log10 because -> it works with floating pt internally for log10(100) it can ans 2.999999999.
        
        int n = 0;
        for (int i =0;y!=0;i++){

            y = y/10;

            n++;
        }

        if(n==1) return true;

        
        int reverse = 0 ;
        int ld  ;

        for(int i = 0 ; i<n/2;i++){

            ld  = x % 10;

            reverse = reverse * 10 + ld;

            x = x/10;
 
        }

        if(  n%2==0 && x == reverse ) return true;

        else if( n%2 !=0 && x/10 == reverse  ) return true;

        else return false;
 
        
    }
};