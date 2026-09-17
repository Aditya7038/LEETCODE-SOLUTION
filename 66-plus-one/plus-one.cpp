class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        if(digits.back()!=9) {

            digits[n-1] = digits.back () + 1;

            return digits;

        }


        for(int i = n-1;;i--){

            if(i==0){

            if(digits[i]==9){

                digits[i]=1;
                digits.push_back(0);
                return digits;
            }

            }

            if(digits[i]==9){

                digits[i] = 0;

                continue;
                
            }


            if(digits[i]!=9){

                digits[i]= digits[i]+1;

                return digits;
            }


        }

        return digits;

    
    }
};