class Solution {
public:
    double average(vector<int>& salary) {

        int n = salary.size();

        int sum = 0;

        int min = salary[0];

        int max = salary[0];

        for(int i = 0;i<n;i++){

            if(salary[i]>max) max = salary[i];

            if(salary[i]<min) min = salary[i];

            sum += salary[i];


        }

        return (double)(sum - max  - min)/(n-2);
        
    }
};