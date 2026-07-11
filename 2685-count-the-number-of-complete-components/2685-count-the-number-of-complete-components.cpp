class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<int>& vis, int node,
             vector<int>& comp) {

        vis[node] = 1;
        comp.push_back(node);

        for (int nxt : adj[node]) {
            if (!vis[nxt])
                dfs(adj, vis, nxt, comp);
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> vis(n, 0);
        int ans = 0;

        for (int i = 0; i < n; i++) {

            if (!vis[i]) {

                vector<int> comp;
                dfs(adj, vis, i, comp);

                int sz = comp.size();
                bool complete = true;

                for (int node : comp) {
                    if (adj[node].size() != sz - 1) {
                        complete = false;
                        break;
                    }
                }

                if (complete)
                    ans++;
            }
        }

        return ans;
    }
};