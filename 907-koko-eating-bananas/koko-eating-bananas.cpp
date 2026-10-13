class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int n = piles.size();

        int maxspeed = 0;

        for(int i = 0;i<n;i++){

            if(piles[i]>maxspeed){

                maxspeed = piles[i];
            }
        }
            
        int low = 1;

        int high = maxspeed;

        long long total_hrs = 0;
        int ans = -1;

        for(;low<=high;){

            int mid = low + (high - low)/2;

            for(int i = 0;i<n;i++){

                total_hrs  +=  (piles[i] / mid);

                if(piles[i] % mid != 0){

                    total_hrs++;
                }

            }

            if(h<total_hrs){

                low = mid + 1;
            }

            else{
                ans = mid;
                high = mid - 1;
            } 

            total_hrs = 0;      
        }

        return  ans;

    }
};