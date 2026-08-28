class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size()!=t.size()) return false;

        vector<int> v(150,500);
        int diff;

        for(int i = 0 ; i<s.size();i++){

            int idx = int (s[i]);

            diff = int(s[i])- int(t[i]);

            if(v[idx] == 500) v[idx] = diff ;

            else{

                if(v[idx]!= diff) return false;
            }
        }

        fill(v.begin(),v.end(),500);

        for(int i = 0 ; i<t.size();i++){

            int idx = int (t[i]);

            diff = int(t[i])- int(s[i]);

            if(v[idx] == 500) v[idx] = diff ;

            else{

                if(v[idx]!= diff) return false;
            }
        }






        return true;
        
    }
};