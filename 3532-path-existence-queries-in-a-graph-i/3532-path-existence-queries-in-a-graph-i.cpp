class Solution {
public:
    int find(int node, vector<int>& parent) {
        if (parent[node] == node)
            return node;
        return parent[node] = find(parent[node], parent);
    }
    void unit(int u, int v, vector<int>& parent) {
        int paru = find(u, parent);
        int parv = find(v, parent);

        if (paru == parv)
            return;
        parent[paru] = find(parv, parent);
    }
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff,
                                      vector<vector<int>>& queries) {
        // dsu
        vector<int> parent(n);
        for (int i = 0; n > i; i++)
            parent[i] = i;

        for (int i = 0; nums.size() - 1 > i; i++) {
            if (-nums[i] + nums[i + 1] <= maxDiff)
                unit(i, i + 1, parent);
        }

        vector<bool> ans;
        for (auto& e : queries) {
            int x = e[0], y = e[1];
            ans.push_back(find(x, parent) == find(y, parent));
        }
        return ans;
    }
};