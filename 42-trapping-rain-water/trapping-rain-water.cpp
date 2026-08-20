class Solution {
public:
    int trap(vector<int>& height) {


        vector<int> v1(height.size());

        v1[0] = -1;

        int n = height.size();

        int max = height[0]  ;
       
      // previous max
        for(int i = 1; i<n; i++){

            v1[i] = max ;

            if(height[i]>max) max = height[i];

        }

        // forward max and min

        v1[n-1] = -1;
        int max1 = height[n-1];
        

        for (int i = n-2 ; i>=0;i-- ){

            if (v1[i]>max1) // fill min element

            v1[i] = max1;

            if(height[i]> max1) max1 = height[i];
            
            }
            



        // water calculation

        int water = 0;

        for(int i=1;i<n-1;i++){

            if(height[i]<v1[i]) water = water + v1[i] - height[i];
        }

        return water;

        
            
        }
    

    
};