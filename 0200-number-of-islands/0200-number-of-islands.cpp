class Solution {
public:
    void dfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int i,
             int j) {

        int m = grid.size();
        int n = grid[0].size();

        if (0 > i or 0 > j or m <= i or n <= j or grid[i][j] == '0' or 
            vis[i][j] == 1)
            return;
        vis[i][j] = 1;
        dfs(grid, vis, i + 1, j);
        dfs(grid, vis, i, j + 1);
        dfs(grid, vis, i - 1, j);
        dfs(grid, vis, i, j - 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        int cnt = 0;

        for (int i = 0; m > i; i++) {
            for (int j = 0; n > j; j++) {
                if (!vis[i][j] and grid[i][j] == '1') {
                    dfs(grid, vis, i, j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};