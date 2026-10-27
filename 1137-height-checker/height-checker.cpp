class Solution {
public:
    int heightChecker(vector<int>& heights) {

        int n = heights.size();

        vector<int> v1;

        for(int i= 0; i<n;i++){

            v1.push_back(heights[i]);
        }

        sort(v1.begin(),v1.end());

        int count = 0;

        int j = 0;

        for(int i = 0;i<n;i++){

            if(v1[i] != heights[j]){

                count++;
                
            }
            j++;

   
        }

        return count;
        
    }
};