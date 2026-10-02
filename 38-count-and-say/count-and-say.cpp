void helper2(string &temp){

    if(temp=="1") {
        temp+='1';
        return;
    }

    string s1="";

    int count = 1;

    for(int i =1;i<temp.size();i++){

        if(temp.size()>1){

            if(temp[i]==temp[i-1]){
                count ++;
            }

            else{
                
                s1+=to_string(count);
                s1.push_back(temp[i-1]);

                count = 1;
            }
        }
        
    }

   
    s1+=to_string(count);
    s1.push_back(temp.back());
    temp=s1;
    
}



void helper(int n,string &temp){

    if(n==1) {

        temp = "1";
        return;
    }


    helper(n-1,temp);

    if(temp.size()!=0)helper2(temp);
}



class Solution {
public:
    string countAndSay(int n) {

      
        string temp="";

        if (n==1) return "1";


        helper(n,temp);

        return temp;
        
    }
};