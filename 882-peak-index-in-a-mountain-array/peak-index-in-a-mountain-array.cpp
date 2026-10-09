class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n = arr.size();

        int low = 0;
        int high = n-1;
        int ans = 0;


        for (;low<=high;){

            int mid = low + (high - low)/2;

            if(mid !=0 && arr[mid]<arr[mid-1]  ){

                high = mid-1;
            }

            else {
                ans = mid;
                low = mid + 1;
                }
        }

        return ans;
        
    }
};