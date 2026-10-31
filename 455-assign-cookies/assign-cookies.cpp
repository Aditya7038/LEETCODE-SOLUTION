class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(),g.end());

        sort(s.begin(),s.end());

        int n = s.size();

        int m = g.size();

        int j = 0;

        int count = 0;

        for(int i = 0;i<n && j < m;){

            if(s[i]>=g[j]){

                count++;
                i++;
                j++;
                continue;
            }

            if(s[i]<g[j]){

                i++;
            }


        }

        return count;
        
    }
};