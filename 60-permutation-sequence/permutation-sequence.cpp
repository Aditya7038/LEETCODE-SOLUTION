void helper(string empty, string originalstr,vector<string> &v1,int &count,bool &flag,int &k){

    if(originalstr==""){

        v1.push_back(empty);

        count++;

        if(count==k){

            flag = true;
            return;
        }
        
        return;}
    

   int len = originalstr.size();
   
   if(flag==false){
   for(int i = 0 ; i<len; i++){

    empty.push_back(originalstr[i]);

    string left = originalstr.substr(0,i) ;

    string right = originalstr.substr(i+1) ;

    if(flag==false)helper(empty,left+right,v1,count,flag,k);

    empty.pop_back();

   }
   }

}


class Solution {
public:
    string getPermutation(int n, int k) {

        vector<string>v1;

        string empty="";

        string originalstr ="";

        for(int i =1;i<n+1;i++){

            originalstr +=to_string(i);
        }

        int size = originalstr.size();

        int count=0;

        bool flag = false;

        helper(empty,originalstr,v1,count,flag,k);

        return v1[k-1];

            
    }


    

        
    
};