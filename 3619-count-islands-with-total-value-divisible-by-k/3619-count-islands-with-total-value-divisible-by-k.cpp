class Solution {
public:
    long long dfs(vector<vector<int>>& grid, int i, int j, int m, int n,
                  vector<vector<int>>& vis) {
        vis[i][j] = 1;
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};
        long long sum = grid[i][j];
        for (int k = 0; 4 > k; k++) {
            int nr = dr[k] + i;
            int nc = dc[k] + j;
            if (nr >= 0 and nc >= 0 and m > nr and n > nc and !vis[nr][nc] and
                grid[i][j] > 0) {
                sum += dfs(grid, nr, nc, m, n, vis);
            }
        }
        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;
        vector<vector<int>> vis(m, vector<int>(n, 0));
        for (int i = 0; m > i; i++) {
            for (int j = 0; n > j; j++) {
                if (grid[i][j] > 0 and !vis[i][j]) {
                    long long sum = dfs(grid, i, j, m, n, vis);
                    if (sum % k == 0)
                        cnt++;
                }
            }
        }
        return cnt;
    }
};