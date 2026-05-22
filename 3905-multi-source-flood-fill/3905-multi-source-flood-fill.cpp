class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        //    mark the colour in the ans given the source
        vector<vector<int>> ans(n, vector<int>(m, 0));

        sort(sources.begin(), sources.end(),
             [](auto& a, auto& b) { return a[2] > b[2]; });

        queue<pair<int, int>> qu;

        for (auto x : sources) {
            int x1 = x[0];
            int y1 = x[1];
            ans[x1][y1] = x[2];

            qu.push({x1, y1});
        }
        //  4 dirn
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        while (!qu.empty()) {
            auto [r, c] = qu.front();
            qu.pop();

            for (int i = 0; 4 > i; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if (nr >= 0 and n > nr and nc >= 0 and m > nc and
                    ans[nr][nc] == 0) {
                    // if zero change the colour acc to adjacent colour
                    ans[nr][nc] = ans[r][c];
                    qu.push({nr, nc});
                }
            }
        }
        return ans;
    }
};