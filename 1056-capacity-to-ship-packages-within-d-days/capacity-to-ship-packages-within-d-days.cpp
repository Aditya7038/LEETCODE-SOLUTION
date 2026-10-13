class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int n = weights.size();
        
        int max = 0;

        int total = 0;

        for(int i = 0 ; i< n ; i++){

            total += weights[i];

            if(weights[i]>max){

                max = weights[i];
            }
        
        }

        int low = max;

        int high = total;

        int count = 1;

        int ans = -1;

        for(;low<=high;){

            int mid = low + (high - low)/2;

            int sum = 0;

            for(int i = 0 ; i< n;i++){

                sum += weights[i];

                if(sum > mid){

                    count++;
                    sum = weights[i];
                    
                }
            }

            if(count <= days){

                ans = mid;

                high = mid - 1;
            }

            else{
                low = mid + 1;
            }

            count = 1;

        }


        return ans;  
        
    }
};