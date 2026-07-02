class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size();
        int n = grid[0].size();
        // deque is used here grid has only 0 and 1 if there are another number
        // too then we use queue
        deque<pair<int, int>> dq;
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        dist[0][0] = grid[0][0];
        dq.push_front({0, 0});
        
        while (!dq.empty()) {

            auto [x, y] = dq.front();
            dq.pop_front();

            for (int k = 0; k < 4; k++) {
                int nr = x + dr[k];
                int nc = y + dc[k];

                if (nr >= 0 && nc >= 0 && nr < m && nc < n) {
                    int wght = grid[nr][nc];

                    if (dist[nr][nc] > dist[x][y] + wght) {

                        dist[nr][nc] = dist[x][y] + wght;

                        if (wght == 0)
                            dq.push_front({nr, nc});
                        else
                            dq.push_back({nr, nc});
                    }
                }
            }
        }

        return dist[m - 1][n - 1] < health;
    }
};