class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& vis) {
        vis[node] = 1;
        for (auto x : adj[node]) {
            if (!vis[x])
                dfs(x, adj, vis);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int src, int dest) {
        // if (n==1) return 1;
        vector<vector<int>> adj(n);
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<int> vis(n, 0);
        dfs(src, adj, vis);

        return vis[dest];
    }
};