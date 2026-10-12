class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int n = arr.size();

        int low = 0;

        int high = n-1;

        int ans = -1;

        int missing = arr[0]-1;

        if(missing >= k){

            return k;
        }
        
        missing = 0;

        for(;low <= high;){

            int mid = low + (high - low)/2;

            missing = arr[mid] - (mid+1);

            if(missing < k){

                ans = mid;

                low = mid + 1;
            }

            else{

                high = mid - 1;
            }

        }

        missing =  arr[ans] - (ans + 1);

        return arr[ans] + k - missing ;

        
        
    }
};