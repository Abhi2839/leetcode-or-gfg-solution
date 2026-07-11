class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<vector<int>> dist(m, vector<int>(n, 1e9));
        dist[0][0] = 0;
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;

        pq.push({0, {0, 0}});

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int diff = it.first;
            int r = it.second.first;
            int c = it.second.second;
            int dr[4] = {-1, 0, 1, 0};
            int dc[4] = {0, 1, 0, -1};
            if (r == m - 1 and c == n - 1)
                return diff;
            for (int k = 0; 4 > k; k++) {
                int nr = dr[k] + r;
                int nc = dc[k] + c;
               if (nr >= 0 and nc >= 0 and m > nr and n > nc) {
                    int newdiff = max(abs(arr[nr][nc] - arr[r][c]), diff);
                    if (dist[nr][nc] > newdiff) {
                        dist[nr][nc] = newdiff;
                        pq.push({newdiff, {nr, nc}});
                    }
                }
            }
        }
        return 0;
    }
};