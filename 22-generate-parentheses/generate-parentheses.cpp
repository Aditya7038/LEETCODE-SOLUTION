void helper( int ob,int cb,int n ,string &empty,vector<string> &v1){

    if(ob == n && cb==n){

        v1.push_back(empty);
        return;
    }

    

    if(ob<n) {

        

        empty.push_back('(');
        helper(ob+1,cb,n,empty,v1);
        empty.pop_back();


    }

    

    if(ob>cb) {

        empty.push_back(')');

        helper(ob,cb+1,n,empty,v1);

        empty.pop_back();
    }

}

class Solution {
public:
    vector<string> generateParenthesis(int n) {

        vector<string> v1;

        string empty = "";

        helper (0,0,n,empty,v1);

        return v1;
        
    }
};