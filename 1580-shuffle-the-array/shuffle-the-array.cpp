class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        

        int j = n;

        vector<int> v1;


        for(int i = 0 ; i<2*n && j<2*n;i++){

            v1.push_back(nums[i]);

            v1.push_back(nums[j]);

            j++;

        }

        return v1;
        
    }
};