class Solution {
public:
    int fib(int n) {

        if(n == 0) return 0;
        if(n == 1) return 1;

        int thirdmax = 0;  
        int secmax = 1;    
        int max = 0;

        for(int i = 0; i < n-1; i++){
            max = secmax + thirdmax;
            thirdmax = secmax;
            secmax = max;
        }

        return max;
    }
};