int  helper (int num,int sum){

    int len = log10(num) + 1;
    

    if(len > 1){

        for(int i = 0 ; i<len;i++){

        sum = sum + num % 10;

        num = num / 10;

        }
        num = sum;

        return helper(num , 0);

    }

    else return num;

}


class Solution {
public:
    int addDigits(int num) {

        if(num==0) return num;

    int n = log10(num) + 1;

    if(n==1) return num;


    if(n==1) return num;
        int x = helper(num,0);

        return x;
        
    }
};