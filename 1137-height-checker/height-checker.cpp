class Solution {
public:
    int heightChecker(vector<int>& heights) {

        int n = heights.size();

        vector<int> v1(101);

        for(int i = 0; i<n;i++){

            v1[heights[i]]++;
           
        }

        int count = 0;

        int j = 0;

        int freq = 0;

        

        for(int i = 0;i<101;i++){

            if(v1[i]==0)continue;

            freq = v1[i];

            for(int k= 0;k<v1[i];j++){

                if(heights[j] != i)count ++;
                k++;

            }
            

        }

        return count;
        
    }
};