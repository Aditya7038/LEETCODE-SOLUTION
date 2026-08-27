class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int len = strs.size();

        sort(strs.begin(), strs.end());

        if(len ==1) return strs[0];

        string s;

        int length = min(strs[0].size(),strs[len-1].size());

            for(int k = 0; k<length;k++){

                if(strs[0][k]==strs[len-1][k]){

                    s.push_back(strs[0][k]);

                }

                else break;
        }

        return s;
        
    }
};