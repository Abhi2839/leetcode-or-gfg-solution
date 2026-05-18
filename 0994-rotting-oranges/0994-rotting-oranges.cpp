class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;
        queue<pair<int, int>> qu;

        for (int i = 0; m > i; i++) {
            for (int j = 0; n > j; j++) {
                if (grid[i][j] == 1)
                    cnt++;
                else if (grid[i][j] == 2)
                    qu.push({i, j});
            }
        }
        if (cnt == 0)
            return 0;
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, -1, 0, 1};
        int min = 0;
        while (!qu.empty()) {
            int size = qu.size();

            bool rotten = false;
            for (int k = 0; size > k; k++) {
                int x = qu.front().first;
                int y = qu.front().second;
                qu.pop();
                for (int i = 0; 4 > i; i++) {
                    int nr = x + dr[i];
                    int nc = y + dc[i];

                    if (nr >= 0 and nc >= 0 and m > nr and n > nc and
                        grid[nr][nc] == 1) {
                        grid[nr][nc] = 2;
                        rotten = true;
                        qu.push({nr, nc});
                        cnt--;
                    }
                }
            }
            if (rotten)
                min++;
        }
        return cnt == 0 ? min : -1;
    }
};