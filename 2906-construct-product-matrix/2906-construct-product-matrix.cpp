class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {

        const int MOD = 12345;

        int m = grid.size();
        int n = grid[0].size();

        int sz = m * n;

        vector<long long> pref(sz, 1), suff(sz, 1);

        vector<int> arr;

        for (auto& r : grid)
            for (int x : r)
                arr.push_back(x);

        for (int i = 1; i < sz; i++)
            pref[i] = (pref[i - 1] * arr[i - 1]) % MOD;

        for (int i = sz - 2; i >= 0; i--)
            suff[i] = (suff[i + 1] * arr[i + 1]) % MOD;

        vector<vector<int>> ans(m, vector<int>(n));

        int idx = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = (pref[idx] * suff[idx]) % MOD;
                idx++;
            }
        }

        return ans;
    }
};