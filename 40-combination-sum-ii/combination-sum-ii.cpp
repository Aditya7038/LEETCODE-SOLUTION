void helper(vector<int>& candidates,int target,int idx , vector<int>&v1,vector<vector<int>> &v2){


    

    if(target<0) return;

    if(target==0){

        v2.push_back(v1);
        return;
    }



    for(int i = idx ; i < candidates.size();i++){

        if(i>idx){

        if(candidates[i] == candidates[i-1]) continue;
        }

        v1.push_back(candidates[i]);

        if(target>=candidates[i])  helper(candidates,target - candidates[i],i+1 ,v1,v2 );
        
        v1.pop_back();
    }



}


class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {


        vector<vector<int>> v2;

        vector<int> v1;

        sort(candidates.begin(),candidates.end());




        helper(candidates,target,0,v1,v2);

        return v2;



  

     
    }
};