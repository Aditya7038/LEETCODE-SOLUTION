class Solution {
public:
    int countCommas(int n) {

        if(n==100000) return n-999;

        if(n<1000) return 0;

        else return  n - 999;

        
    }
};