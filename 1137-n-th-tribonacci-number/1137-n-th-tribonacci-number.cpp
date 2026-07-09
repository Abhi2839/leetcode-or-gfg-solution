class Solution {
public:
    int tribonacci(int n) {
        // using dp
        if (n == 0)
            return 0;
        if (n == 1 or n == 2)
            return 1;
        vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        for (int i = 3; n >= i; i++) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
        return dp[n];
    }
};