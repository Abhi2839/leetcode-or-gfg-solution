class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int, int>> qu;
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        vector<vector<int>> dist(n, vector<int>(n, -1));
 // Multi source BFS
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j]) {
                    vis[i][j] = true;
                    dist[i][j] = 0;
                    qu.push({i, j});
                }
            }
        }
           int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        while (!qu.empty()) {
            int x = qu.front().first;
            int y = qu.front().second;
            qu.pop();

            for (int k = 0; k < 4; k++) {
                int nr = x + dr[k];
                int nc = y + dc[k];

                if (nr >= 0 && nc >= 0 && nr < n && nc < n && !vis[nr][nc]) {
                    vis[nr][nc] = true;
                    dist[nr][nc] = dist[x][y] + 1;
                    qu.push({nr, nc});
                }
            }
        }
 // Dijkstra using Max Heap
        priority_queue<pair<int, pair<int, int>>> pq;
        vector<vector<bool>> vis2(n, vector<bool>(n, false));
 pq.push({dist[0][0], {0, 0}});

        while (!pq.empty()) {
            auto pr = pq.top();
            pq.pop();

            int di = pr.first;
            int x = pr.second.first;
            int y = pr.second.second;

            if (vis2[x][y])
                continue;

            vis2[x][y] = true;
// base case and final dest
            if (x == n - 1 && y == n - 1)
                return di;

            for (int k = 0; k < 4; k++) {
                int nr = x + dr[k];
                int nc = y + dc[k];

                if (nr >= 0 && nc >= 0 && nr < n && nc < n && !vis2[nr][nc]) {
                    int mindis = min(di, dist[nr][nc]);
                    pq.push({mindis, {nr, nc}});
                }
            }
        }

        return 0;
    }
};