class Solution {
public:
    int numSquares(int n) {
        // int cnt=0;
        vector<int> dp(n + 1, INT_MAX);
       dp[0]=0, dp[1] = 1;
        // ,dp[2]=2,dp[3]=3,dp[4]=1
        for (int i = 2; n >= i; i++) {
            for (int j = 1; i>=j*j;j++) {
                dp[i] = min(dp[i - j * j] + 1, dp[i]);
            }
        }
        return dp[n];
    }
};