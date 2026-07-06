class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto& e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
            adj[e[1]].push_back({e[0], 2 * e[2]});
        }
        vector<int> dist(n, INT_MAX);
        vector<int> vis(n, 0);

        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
        //    min heap dist node
        pq.push({0, 0});
        dist[0] = 0;
        while (!pq.empty()) {
            int x = pq.top().second;
            pq.pop();
            if (!vis[x]) {
                // continue;
                vis[x] = true;
                for (auto [v, w] : adj[x]) {
                    if (dist[x] + w < dist[v]) {
                        dist[v] = dist[x] + w;
                        pq.push({dist[v], v});
                    }
                }
            }
        }

        if (dist[n - 1] == INT_MAX)
            return -1;
        return dist[n - 1];
    }
};