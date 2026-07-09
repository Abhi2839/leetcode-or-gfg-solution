class Solution {
public:
    int cnt(int i, int j, int m, int n, vector<vector<int>>& dp,
            vector<vector<int>>& arr) {
        if (i >= m or j >= n)
            return 0;
        if (i == m - 1 and j == n - 1)
            return 1;
        if (arr[i][j] == 1)
            dp[i][j] = 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        return dp[i][j] =
                   cnt(i + 1, j, m, n, dp, arr) + cnt(i, j + 1, m, n, dp, arr);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size(), n = arr[0].size();
        if (arr[m-1][n-1]==1) return 0; 
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return cnt(0, 0, m, n, dp, arr);
    }
};
