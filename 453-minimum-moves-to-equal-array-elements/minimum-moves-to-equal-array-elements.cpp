class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();

        int mn = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] < mn)
                mn = nums[i];
        }

        long long moves = 0;
        for (int i = 0; i < n; i++) {
            moves += nums[i] - mn;
        }

        return moves;
    }
};