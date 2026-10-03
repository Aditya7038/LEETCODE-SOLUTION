int fact (int n){

    int fact = 1;

    for(int i = 1 ; i <n+1;i++){

        fact*=i;

    }

    return fact;
}



void helper(string originalstr,int n,int k,string &empty){

    if(originalstr.size()==1) {

        empty += originalstr;

        return ;
    }

    int idx = k / fact(n-1);

    empty.push_back(originalstr[idx]);

    string left = originalstr.substr(0,idx);

    string right = originalstr.substr(idx+1);

    helper(left+right , n-1,k%fact(n-1),empty);


}

class Solution {
public:
    string getPermutation(int n, int k) {

        string empty="";

        string originalstr="";

        for(int i = 1; i<n+1;i++){

            originalstr+= to_string(i);
        }
        
        

        helper(originalstr,n,k-1,empty);

    

    return empty;

        
    }
};