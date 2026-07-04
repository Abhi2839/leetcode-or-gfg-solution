class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        int score = INT_MAX;
        // vector pair adj undirected graph bfs to find min weight
        vector<vector<pair<int, int>>> adj(n + 1);
        for (auto& e : roads) {
            adj[e[0]].push_back({e[1], e[2]});
            adj[e[1]].push_back({e[0], e[2]});
        }
        vector<int> vis(n + 1, 0);
        queue<int> qu;

        qu.push(1);
        vis[1] = 1;
        while (!qu.empty()) {
            int curr = qu.front();
            qu.pop();

            for (auto x : adj[curr]) {
                int wght = x.second;
                score = min(score, wght);
                if (!vis[x.first]) {
                    qu.push(x.first);
                    vis[x.first] = 1;
                }
            }
        }
        return score;
    }
};