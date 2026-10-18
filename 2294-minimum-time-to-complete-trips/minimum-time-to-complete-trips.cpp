class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {

        int n = time.size();

        int max = 0;

        for(int i = 0;i<n;i++){

            if(time[i]>max){

                max = time[i];
            }
        }

        long long low = 1;
        long long high = (long long )max * totalTrips;
        long long trips = 0;
        long long ans = 0;


        for(;low<=high;){

            long long mid = low + (high-low)/2;

            for(int i = 0;i<n ;i++){

                trips += mid / time[i];
            }

            if(trips>=totalTrips){
                ans = mid;
                high = mid -1;
            }

            else{
                low  = mid + 1;
            }

            trips = 0;
        }

    return ans;
        
    }
};