
void helper(int idx,vector<int>&nums,vector<vector<int>>&v2 ){

    if(idx==nums.size()-1){

        v2.push_back(nums);
        return;
    }

    for(int i =idx ; i<nums.size();i++){

        swap(nums[idx],nums[i]);

        helper(idx+1,nums,v2);

        swap(nums[idx], nums[i]); 
    }

    

}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {

        

        vector<vector<int>> v2;

        int idx ;

        helper(0,nums,v2);

        return v2;

        
    }
};