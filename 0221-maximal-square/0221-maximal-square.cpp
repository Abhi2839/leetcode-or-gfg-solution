class Solution {
public:
    int maximalSquare(vector<vector<char>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        int side = 0;
        // top bottom diagonal
        for (int i = 0; m > i; i++) {
            for (int j = 0; n > j; j++) {
                if (mat[i][j] == '1') {
                    if (i == 0 or j == 0) {
                        dp[i][j] = 1;
                    } else
                        dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1],
                                            dp[i - 1][j - 1]});
                }
                side = max(side, dp[i][j]);
            }
        }
        return side * side;
    }
};