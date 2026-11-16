class Solution {
public:
    string digitSum(string s, int k) {

        int n = s.size();

        if(n<=k) return s;

    
        int sum = 0;

        int count = 0;

        string ans = "";



        while(n > k){


            for(int i = 0;i<n;i++){

                count++;

                sum += (s[i]-'0');

                if(count == k || i==n-1){

                    ans += to_string(sum);
                    sum =0;
                    count = 0;
                
                }

            }

            s = ans;

            ans.clear();

            n = s.size();

            

        }

        return s;




        
    }
};