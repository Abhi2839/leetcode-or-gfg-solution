class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        k %= m * n;
        vector<vector<int>> ans(m, vector<int>(n));
        for (int i = 0; m > i; i++) {
            for (int j = 0; n > j; j++) {
                int oi = i * n + j; // flatten the arr  old idx 
                int ni = (oi + k) % (m * n);  // ne widx
                int nr = ni / n;
                int nc = ni % n;
                ans[nr][nc] = grid[i][j];
            }
        }
        return ans;
    }
};