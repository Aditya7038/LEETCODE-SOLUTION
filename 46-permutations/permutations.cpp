
void helper(vector<int> empty,vector<int>nums,vector<vector<int>>&v2 ){

    if(0==nums.size()){

        v2.push_back(empty);
        return;
    }

   int len = nums.size();
   
   for(int i = 0 ; i<len; i++){

    empty.push_back(nums[i]);

    vector<int>lums;

    for(int j =0;j<len;j++){

        if(j==i)continue;

        lums.push_back(nums[j]);
    }

  
    helper(empty,lums,v2);

    empty.pop_back();

   }

}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<int> empty;

        vector<vector<int>> v2;

        int idx ;

        helper(empty,nums,v2);

        return v2;

        
    }
};