class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        vector<int> mark(128);

        int j = jewels.size();
        int s = stones.size();

        for (int i = 0; i < j; i++) {

            mark[jewels[i]] = 1;
        }

        int count = 0;

        for (int i = 0; i < s; i++) {
            if (mark[stones[i]] == 1) count++;
        }

        return count;
    }
};