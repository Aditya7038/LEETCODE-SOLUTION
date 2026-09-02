class Solution {
public:
    int climbStairs(int n) {

    if(n==1) return 1;
    if(n==2) return 2;

    vector<int> v(n+1);

    v[0] = 1;
    v[1] = 2;
    int firstmax,secmax=2,thirdmax=1;


    for (int i = 0 ; i< n-2;i++){

        firstmax = secmax + thirdmax;

        thirdmax = secmax;

        secmax = firstmax;

    
    }

    return firstmax;
 
        
    }
};