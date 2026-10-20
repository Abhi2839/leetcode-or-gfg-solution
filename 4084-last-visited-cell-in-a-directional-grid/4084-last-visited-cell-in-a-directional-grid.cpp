class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        
        int r = 0, c = 0;
        vis[0][0] = true;
        
        while (true) {
            char dir = grid[r][c];
            int nr = r, nc = c;
            
            if (dir == 'U') nr--;
            else if (dir == 'D') nr++;
            else if (dir == 'L') nc--;
            else if (dir == 'R') nc++;
            if (nr < 0 || nr >= m || nc < 0 || nc >= n || vis[nr][nc]) {
                return {r, c};
            }
            
            vis[nr][nc] = true;
            r = nr;
            c = nc;
        }
    }
};