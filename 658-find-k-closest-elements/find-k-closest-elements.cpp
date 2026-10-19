int helper1(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int ans = arr.size();

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;

}




class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int n = arr.size();

        int ub = helper1(arr,x); // arr[i]>=x

        int lb = ub - 1;


        for(;abs(ub-lb) - 1 != k;){

            if(lb<0){
                ub++;
                continue;
            }

            if(ub>n-1){
                lb--; 
                continue;
            }

            int left  = abs(x-arr[lb]);

            int right = abs(x-arr[ub]);

            if(left<=right) lb--;
            else ub++;



        }



        vector<int>v1;

        for(int i = lb+1;i<ub;i++){

            v1.push_back(arr[i]);
        }

        return v1;
        
    }
};