class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        // vector<vector<int>>adj[n+1];
        vector<int> freq(n + 2, 0);
        for (auto& x : edges) {
            freq[x[0]]++;
            freq[x[1]]++;
        }
        for (int i = 1; n + 1 >= i; i++)
            if (freq[i] == n)
                return i;
        return -1;
    }
};