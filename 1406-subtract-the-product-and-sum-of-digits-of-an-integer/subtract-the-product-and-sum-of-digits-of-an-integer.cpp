class Solution {
public:
    int subtractProductAndSum(int n) {

        int sum = 0;
        int product = 1;

        for(int i =0;n!=0;i++){

            int lastdigit = n % 10;

            product *=lastdigit;

            sum +=lastdigit;

            n = n/10;

            


        }

        return product - sum;
        
    }
};