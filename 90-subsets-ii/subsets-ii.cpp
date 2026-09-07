void helper(int idx ,  vector<int> &nums  ,  vector<int> &empty  ,  vector<vector<int>> &twodvec,  bool flag){


    if(idx == nums.size()){

        twodvec.push_back(empty);
        return;
    }

    if(idx == nums.size()-1){

        empty.push_back(nums[idx]);

       if(flag == true) helper( idx+1 ,   nums  ,  empty  ,   twodvec,  true);

        empty.pop_back();

        helper( idx+1 ,   nums  ,  empty  ,   twodvec,  true);

        return;

    }

    
    if(nums[idx]==nums[idx+1]){

        empty.push_back(nums[idx]);

        if(flag == true) helper( idx+1 ,   nums  ,  empty  ,   twodvec,  true);

        empty.pop_back();

        helper( idx+1 ,   nums  ,  empty  ,   twodvec,  false);


    }

    else{

        empty.push_back(nums[idx]);

        if(flag == true) helper( idx+1 ,   nums  ,  empty  ,   twodvec,  true);

        empty.pop_back();

        helper( idx+1 ,   nums  ,  empty  ,   twodvec,  true);

    }



}




class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> twodvec;

        vector<int> empty;

        bool flag = true;

        sort(nums.begin(),nums.end());


        helper (0,nums,empty,twodvec,flag);

        return twodvec;

    }
};