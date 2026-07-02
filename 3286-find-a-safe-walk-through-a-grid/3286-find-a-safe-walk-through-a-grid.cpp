class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size();
        int n = grid[0].size();
        // deque used bcoz 0 1  bfs not multiple numbeer
        deque<pair<int, int>> dq;
        vector<vector<int>> dist(
            m,
            vector<int>(n, INT_MAX)); // intmax bcoz we are storing min element
        dq.push_front({0, 0});
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};
        dist[0][0] = grid[0][0];

        while (!dq.empty()) {
            auto [x, y] = dq.front();
            dq.pop_front();

            for (int i = 0; 4 > i; i++) {
                int nr = x + dr[i];
                int nc = y + dc[i];

                if (nr >= 0 and nc >= 0 and m > nr and n > nc) {
                    int weight = grid[nr][nc];
                    
                    if (dist[nr][nc] > dist[x][y] + weight) {
                        dist[nr][nc] = dist[x][y] + weight;

                        if (weight == 0)
                            dq.push_front({nr, nc});
                        else
                            dq.push_back({nr, nc});
                    }
                }
            }
        }
        return health > dist[m - 1][n - 1];
    }
};