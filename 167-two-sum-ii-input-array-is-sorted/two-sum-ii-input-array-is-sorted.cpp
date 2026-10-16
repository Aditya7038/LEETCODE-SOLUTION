class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int n = numbers.size();

        int i = 0;
        int j = n-1;

        vector<int> v1;

        for(;;){

            int sum = numbers[i] + numbers[j];

            if(sum==target){

                v1.push_back(i+1);
                v1.push_back(j+1);

                return v1;
            }

            if(sum<target) i++;

            else j--;

        }

        return v1;
        
    }
};