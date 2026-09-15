

void helper(int idx,vector<int>& candidates, int target,vector<int> &empty, vector<vector<int>> &v2){

    if(target < 0) return;

    if(target == 0){

        v2.push_back(empty);
        return;
    }

    for(int i = idx;i<candidates.size();i++){

         if(i > idx && candidates[i] == candidates[i-1]){
        
        continue;

    }

        empty.push_back(candidates[i]);

        helper(i+1 ,candidates,target - candidates[i] ,empty,v2);

        empty.pop_back();

    }

}


class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<int> empty;

        vector<vector<int>> v2;

        

        int idx=0;

        sort(candidates.begin(),candidates.end());

        helper(idx , candidates,target,empty,v2);

        return v2;
        
    }
};