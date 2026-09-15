class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size();
        vector<vector<bool>> isPal(n, vector<bool>(n, false));

        // build palindrome table: isPal[i][j] = true if s[i..j] is palindrome
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                if (i == j) isPal[i][j] = true;
                else if (j == i + 1) isPal[i][j] = (s[i] == s[j]);
                else isPal[i][j] = (s[i] == s[j]) && isPal[i+1][j-1];
            }
        }

        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i-1]; // skip current char
            // only need to check length k and k+1 (never beneficial to take longer)
            for (int len = k; len <= k + 1; len++) {
                int start = i - len;
                if (start >= 0 && isPal[start][i-1]) {
                    dp[i] = max(dp[i], dp[start] + 1);
                }
            }
        }

        return dp[n];
    }
};