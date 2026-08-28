class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size()!=t.size()) return false;

        vector<int> v1(150,500);

        vector<int> v2(150,1000);
        int diff1,diff2;

        for(int i = 0 ; i<s.size();i++){

            int idx1 = int (s[i]);

            int idx2 = int (t[i]);

            diff1 = int(s[i])- int(t[i]);

            diff2 = int(t[i])- int(s[i]);

            if(v1[idx1] == 500) v1[idx1] = diff1 ;

            else{
                if(v1[idx1]!= diff1) return false;
            }

            if(v2[idx2] == 1000) v2[idx2] = diff2 ;

            else{
                if(v2[idx2]!= diff2) return false;
            }


        }

        




        return true;
        
    }
};