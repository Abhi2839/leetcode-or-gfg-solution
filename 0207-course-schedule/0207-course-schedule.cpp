class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& arr) {
        vector<vector<int>> adj(n);
        vector<int> indegree(n, 0);
        for (auto& a : arr)
            adj[a[1]].push_back(a[0]);

        for (int i = 0; n > i; i++) {
            for (auto x : adj[i])
                indegree[x]++;
        }
        queue<int> qu;
        for (int i = 0; n > i; i++)
            if (indegree[i] == 0)
                qu.push(i);
        vector<int> topo;

        while (!qu.empty()) {
            int curr = qu.front();
            qu.pop();
            topo.push_back(curr);
            for (auto x : adj[curr]) {
                indegree[x]--;
                if (indegree[x] == 0) {
                    qu.push(x);
                }
            }
        }
      return topo.size()==n;
    }
};



