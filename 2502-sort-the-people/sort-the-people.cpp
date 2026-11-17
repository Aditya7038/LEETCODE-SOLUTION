class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        int n = names.size();


        vector <pair<int,string>> P;

        for(int i = 0 ; i<n ; i++){

            P.push_back({heights[i],names[i]}); // push back takes single element so use {a,b}

        }

        sort(P.rbegin(),P.rend());

        vector<string> ans(n);


        for(int i = 0; i<n ; i++){

            ans[i] = P[i].second;
        }

        return ans;




        
    }
};