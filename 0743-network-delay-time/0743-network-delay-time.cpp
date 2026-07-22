class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        vector<pair<int, int>> adj[n + 1];

        for (auto& e : times) {
            adj[e[0]].push_back({e[1], e[2]});
        }

        vector<int> dist(n + 1, 1e9);

        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;

        dist[k] = 0;
        pq.push({0, k});

        while (!pq.empty()) {
            auto [d, node] = pq.top();
            pq.pop();
            if (d > dist[node])
                continue;
            for (auto& [v, wt] : adj[node]) {
                if (dist[v] > d + wt) {
                    dist[v] = d + wt;
                    pq.push({dist[v], v});
                }
            }
        }
        
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (dist[i] == 1e9)
                return -1;
            ans = max(ans, dist[i]);
        }

        return ans;
    }
};