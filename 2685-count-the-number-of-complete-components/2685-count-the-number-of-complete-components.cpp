class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<int>& vis, int j,
             vector<int>& comp) {

        vis[j] = 1;
        comp.push_back(j);

        for (int nxt : adj[j]) {
            if (!vis[nxt])
                dfs(adj, vis, nxt, comp);
        }
    }
int countCompleteComponents(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> vis(n, 0);
        int cnt = 0;

        for (int i = 0; i < n; i++) {

            if (!vis[i]) {

                vector<int> comp;
                dfs(adj, vis, i, comp);

                int sz = comp.size();
                bool ans = true;

                for (int j : comp) {
                    if (adj[j].size() != sz - 1) {
                        ans = false;
                        break;
                    }
                }

                if (ans)
                    cnt++;
            }
        }

        return cnt;
    }
};