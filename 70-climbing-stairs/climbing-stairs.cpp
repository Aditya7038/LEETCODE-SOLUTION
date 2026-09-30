class Solution {
public:
    int climbStairs(int n) {

        if(n==2) return 2;
        if(n==1) return 1;

   
    int firstmax,secmax=2,thirdmax=1;


    for (int i = 0 ; i< n-2;i++){

        firstmax = secmax + thirdmax;

        thirdmax = secmax;

        secmax = firstmax;

    
    }

    return firstmax;
 
        
    }
};