class Solution {
public:
    long long dfs(vector<vector<int>>& grid, int k, int i, int j,
                  vector<vector<int>>& vis) {
        vis[i][j] = 1;
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};
        int m = grid.size();
        int n = grid[0].size();
        long long sum = grid[i][j];
        for (int l = 0; 4 > l; l++) {
            int nr = dr[l] + i;
            int nc = dc[l] + j;
            if (nr >= 0 and nc >= 0 and m > nr and n > nc and !vis[nr][nc] and
                grid[nr][nc] > 0) {
                sum += dfs(grid, k, nr, nc, vis);
            }
        }
        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        // vis
        vector<vector<int>> vis(m, vector<int>(n, 0));
        int cnt = 0;
        for (int i = 0; m > i; i++) {
            for (int j = 0; n > j; j++) {
                if (!vis[i][j] and grid[i][j]) {
                    long long ans = dfs(grid, k, i, j, vis);
                    if (ans % k == 0)
                        cnt++;
                }
            }
        }
        return cnt;
    }
};