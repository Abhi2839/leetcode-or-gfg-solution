class Solution {
public:
    int dfs(vector<vector<int>>& arr, int i, int j, vector<vector<int>>& dp) {
        int m = arr.size();
        int n = arr[0].size();
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};
        int ans = 0;
        if (dp[i][j] != -1)
            return dp[i][j];

        for (int k = 0; 4 > k; k++) {
            int nr = i + dr[k];
            int nc = j + dc[k];
            if (nr >= 0 and m > nr and nc >= 0 and n > nc and
                arr[nr][nc] > arr[i][j]) {
                ans = max(ans, 1 + dfs(arr, nr, nc, dp));
            }
        }
        return dp[i][j] = ans;
    }
    int longestIncreasingPath(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        int ans = 0;
        for (int i = 0; m > i; i++) {
            for (int j = 0; n > j; j++) {
                ans = max(ans, 1 + dfs(arr, i, j, dp));
            }
        }
        return ans;
    }
};