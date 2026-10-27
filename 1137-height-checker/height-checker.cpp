class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int> freq(101, 0);

        for (int h : heights) {
            freq[h]++;
        }

        int count = 0;
        int idx = 0;

        for (int v = 1; v <= 100; v++) {
            while (freq[v] > 0) {
                if (heights[idx] != v) count++;
                idx++;
                freq[v]--;
            }
        }

        return count;
    }
};