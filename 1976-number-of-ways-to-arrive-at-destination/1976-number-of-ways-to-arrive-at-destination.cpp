class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        // undirected graph
        vector<pair<int, int>> adj[n];
        for (auto& r : roads) {
            adj[r[0]].push_back({r[1], r[2]});
            adj[r[1]].push_back({r[0], r[2]});
        }
        priority_queue<pair<long long,long long>, vector<pair<long long,long long>>,
                       greater<pair<long,long>>>
            pq;
        vector<long long> dist(n, LLONG_MAX), cntpath(n, 0);
        dist[0] = 0, cntpath[0] = 1;
        pq.push({0, 0});
        int mod = 1e9 + 7;
        while (!pq.empty()) {
            auto [cost, node] = pq.top();
            pq.pop();
            if (cost > dist[node])
                continue;
            for (auto x : adj[node]) {
                long long neigh = x.first;
                long long weight = x.second;
                long long co = weight + cost;
                if (dist[neigh] > co) {
                    dist[neigh] = co;
                    pq.push({co, neigh});
                    cntpath[neigh] = cntpath[node];
                }

                else if (weight + cost == dist[neigh]) {
                    cntpath[neigh] = (cntpath[neigh] + cntpath[node]) % mod;
                }
            }
        }
        return cntpath[n - 1] % mod;
        ;
    }
};