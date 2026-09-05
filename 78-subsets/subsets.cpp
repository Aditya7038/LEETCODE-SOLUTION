   void helper( int idx ,vector<int> &nums, vector<int> &empty, vector<vector<int>> &v1){

    if(idx == nums.size()){
        v1.push_back(empty);
        return;
    }

    empty.push_back(nums[idx]);

    helper(idx+1, nums, empty , v1);

    empty.pop_back();

    helper(idx+1, nums, empty , v1);


}



class Solution {
public:


vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> v1;
    vector<int> empty;
    helper(0, nums, empty, v1);
    return v1;
}

        
    
};