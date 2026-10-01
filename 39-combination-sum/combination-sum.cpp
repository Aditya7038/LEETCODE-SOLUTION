void helper(vector<int>& candidates,int target,int idx , vector<int>&v1,vector<vector<int>> &v2){

    if(target<0) return;

    if(target==0){

        v2.push_back(v1);
        return;
    }

    for(int i = idx ; i < candidates.size();i++){

        v1.push_back(candidates[i]);

        helper(candidates,target - candidates[i],i ,v1,v2 );

        v1.pop_back();
    }



}


class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {


        vector<vector<int>> v2;

        vector<int> v1;




        helper(candidates,target,0,v1,v2);

        return v2;



  

     
    }
};