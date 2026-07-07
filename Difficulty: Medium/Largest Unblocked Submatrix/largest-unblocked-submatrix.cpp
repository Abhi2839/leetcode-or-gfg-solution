class Solution {
public:
    int largestArea(int n, int m, vector<vector<int>> &arr) {

        vector<int> rs, cs;

        for (auto &x : arr) {
            rs.push_back(x[0]);
            cs.push_back(x[1]);
        }
sort(rs.begin(), rs.end());
        sort(cs.begin(), cs.end());
        int mr = 0, mc = 0;

        int prv = 0;
        for (int r : rs) {
            mr = max(mr, r - prv - 1);
            prv = r;
        }
        mr = max(mr, n - prv);

        prv = 0;
        for (int c : cs) {
            mc = max(mc, c - prv - 1);
            prv = c;
        }
        mc = max(mc, m - prv);

        return mr * mc;
    }
};