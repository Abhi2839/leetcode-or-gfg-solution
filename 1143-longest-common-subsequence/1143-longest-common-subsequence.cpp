class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int a = s1.length();
        int b = s2.length();
        vector<vector<int>> dp(a + 1, vector<int>(b + 1, 0));

        for (int i = 1; a >= i; i++) {
            for (int j = 1; b >= j; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
       return dp[a][b];
     
    }
};