class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        int n = nums.size();

        vector<int>v;

        sort(nums.begin(),nums.end());

        

        for(int i = 1 ; i<n ; i+=2){

            v.push_back(nums[i]);
            v.push_back(nums[i-1]);

        }

        return v;
        
    }
};