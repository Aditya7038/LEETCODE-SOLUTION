void helper(int idx,vector<int>&empty,int k ,vector<int> &v1,vector<vector<int>> &v2 ){


    if(empty.size()==k){

        v2.push_back(empty);
        return;

    }

    if(idx==v1.size()) return;

    empty.push_back(v1[idx]);

    helper(idx+1,empty,k,v1,v2);

    empty.pop_back();

    helper(idx+1,empty,k,v1,v2);



}

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {


        vector<vector<int>> v2;
        vector<int> v1,empty;

        int idx =0;

        for(int i = 1; i<n+1;i++){

            v1.push_back(i);
        }

        helper(idx,empty,k,v1,v2);

        return v2;

        
    }
};