int count_digit(int num){

    int count =0;

    for(int i =0 ; num!=0;i++){

        num = num/10;
        count++;
    }

    return count;
}


int  helper (int num,int sum){

    int len = count_digit(num);

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

    if(num==0) return 0;

    int len = count_digit(num) ;

    if(len==1) return num;

        int y = helper(num,0);

        return y;
        
    }
};