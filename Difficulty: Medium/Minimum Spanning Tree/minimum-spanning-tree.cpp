class Solution {
public:
    int spanningTree(int n, vector<vector<int>>& edges) {
        vector<pair<int,int>> adj[n];
        for (auto &e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
            adj[e[1]].push_back({e[0], e[2]});
        }
        priority_queue<pair<int,int>,
                       vector<pair<int,int>>,
                       greater<pair<int,int>>> pq;
        vector<int> vis(n, 0);
        pq.push({0, 0});
        int ans = 0;
        
        
        while (!pq.empty()) {
            auto [wt, u] = pq.top();
            pq.pop();
            if (vis[u])
                continue;
            vis[u] = 1;
            ans += wt;
for (auto &x : adj[u]) {
                int v = x.first;
                int w = x.second;
                    if (!vis[v]) {
                    pq.push({w, v});
                }
            }
        }

        return ans;
    }
};