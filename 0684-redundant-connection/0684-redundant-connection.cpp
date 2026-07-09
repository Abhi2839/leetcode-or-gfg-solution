class Solution {
public:
    int find(int node, vector<int>& parent) {
        if (parent[node] == node)
            return node;
        return parent[node] = find(parent[node], parent);
    }
    void unite(int u, int v, vector<int>& parent, vector<int>& size) {
        int paru = find(u, parent);
        int parv = find(v, parent);
        if (size[paru] >= size[parv]) {
            parent[parv] = paru;
            size[paru] += parv;
        } else {
            parent[paru] = parv;
            size[parv] += paru;
        }
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> parent(n+1);
        for (int i = 0; n >= i; i++) {
            parent[i] = i;
        }
        vector<int> size(n + 1, 1);
        for (auto& e : edges) {
            if (find(e[0], parent) == find(e[1], parent))
                return e;
            unite(e[0], e[1], parent, size);
        }
        return {-1, -1};
    }
};