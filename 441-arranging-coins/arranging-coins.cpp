class Solution {
public:
    int arrangeCoins(int n) {

        if(n==1) return 1;

        int count = 0;

        for(int i = 1 ;n>=i;i++ ){

            count++;
            n=n-i;

        }

        return count;
        
    }
};