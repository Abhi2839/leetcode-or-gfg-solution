class Solution {
public:
    int find(int i, vector<int>& parent) {
        if (parent[i] == i) {
            return i;
        }
        return parent[i] = find(parent[i], parent);
    }
    void unite(vector<int>& parent, vector<int>& size, int u, int v) {

        int parU = find(u, parent);
        int parV = find(v, parent);
        if (parU == parV)
            return;
        if (size[parU] >= size[parV]) {
            parent[parV] = parU;
            size[parU] += size[parV];
        } else {
            parent[parU] = parV;
            size[parV] += size[parU];
        }

        // parent[u] = v;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> parent(n + 1);
        for (int i = 0; n >= i; i++)
            parent[i] = i;
        vector<int> size(n + 1, 1);
        for (auto& e : edges) {
            if (find(e[0], parent) == find(e[1], parent))
                return e;
            unite(parent, size, e[0], e[1]);
        }
        return {-1, -1};
    }
};