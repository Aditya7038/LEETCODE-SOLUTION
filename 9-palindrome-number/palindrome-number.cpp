class Solution {
public:
    bool isPalindrome(int x) {

        if(x==0) return true;

        if(x<0) return false;

        int n = log10(x) + 1;

        if(n==1) return true;

        
        int reverse = 0 ;
        int ld  ;

        for(int i = 0 ; i<n/2;i++){

            ld  = x % 10;

            reverse = reverse * 10 + ld;

            x = x/10;
 
        }

        if(x == reverse &&  n%2==0) return true;

        else if( n%2 !=0 && x/10 == reverse  ) return true;

        else return false;
 
        
    }
};