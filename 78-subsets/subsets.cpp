


void helper(vector<int> &v1,vector<vector<int>> &v2,vector<int> &nums,int idx){

    if(nums.size()==idx){

        v2.push_back(v1);
        return;
    }

   v1.push_back(nums[idx]);

    helper(v1,v2,nums,idx+1);

    v1.pop_back();

    helper(v1,v2,nums,idx+1);



}



class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {


        vector<int> v1;
        
        vector<vector<int>> v2;

       int idx =0;



        helper (v1,v2,nums,idx);

        return v2;


   







        
    }
};