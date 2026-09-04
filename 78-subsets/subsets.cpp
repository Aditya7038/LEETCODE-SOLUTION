class Solution {
public:
    void helper(vector<int> ans, vector<int> nums, vector<vector<int>> &v1){

        if(nums.size() == 0){
            v1.push_back(ans);
            return;
        }

        vector<int> nums2(nums.begin()+1, nums.end());

        vector<int> ans2 = ans;
        ans2.push_back(nums[0]);

        helper(ans2, nums2, v1);   // include nums[0]

        helper(ans, nums2, v1);    // exclude nums[0]
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> v1;
        vector<int> ans;

        helper(ans, nums, v1);

        return v1;
    }
};