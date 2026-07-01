class Solution {
public:
    int minDistance(string s1, string s2) {
        int ops = 0;
        int l1 = s1.length();
        int l2 = s2.length();
        vector<vector<int>> dp(l1 + 1, vector<int>(l2 + 1, 0));
        for (int i = 1; l1 >= i; i++) {
            for (int j = 1; l2 >= j; j++) {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
        ops = dp[l1][l2];
        return l1 + l2 - 2 * ops;
    }
};