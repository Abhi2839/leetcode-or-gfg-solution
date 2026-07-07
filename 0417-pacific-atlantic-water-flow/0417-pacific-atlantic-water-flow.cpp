class Solution {
public:
    void bfs(queue<pair<int, int>>& q, vector<vector<int>>& vis,
             vector<vector<int>>& arr) {

        int m = arr.size();
        int n = arr[0].size();

        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();

            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if (nr >= 0 && nr < m && nc >= 0 && nc < n && !vis[nr][nc] &&
                    arr[nr][nc] >= arr[r][c]) {

                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();

        vector<vector<int>> pac(m, vector<int>(n, 0));
        vector<vector<int>> atl(m, vector<int>(n, 0));

        queue<pair<int, int>> qp, qa;
        for (int i = 0; i < m; i++) {
            qp.push({i, 0});
            pac[i][0] = 1;
        }
        for (int j = 0; j < n; j++) {
            if (!pac[0][j]) {
                qp.push({0, j});
                pac[0][j] = 1;
            }
        }
        for (int i = 0; i < m; i++) {
            qa.push({i, n - 1});
            atl[i][n - 1] = 1;
        }
        for (int j = 0; j < n; j++) {
            if (!atl[m - 1][j]) {
                qa.push({m - 1, j});
                atl[m - 1][j] = 1;
            }
        }

        bfs(qp, pac, arr);
        bfs(qa, atl, arr);

        vector<vector<int>> ans;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pac[i][j] && atl[i][j]) {
                    ans.push_back({i, j});
                }
            }
        }

        return ans;
    }
};