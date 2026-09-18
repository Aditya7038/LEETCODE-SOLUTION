class Solution {
public:
    bool checkPerfectNumber(int num) {

        int sum =0;

        if(num==1) return false;

        for(int i=2;i<=pow(num,0.5);i++){

            if(num%i == 0) {

                sum =  sum + i + (num/i);
            
        }   
        }

    if(sum+1==num)return true;

    else return false;
        }


    
};