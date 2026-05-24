class Solution {
public:
    string findCommonResponse(vector<vector<string>>& resp) {
        // unordered_map
        // sort acc to freq
        // set
        unordered_map<string, int> mp;
        for (auto& x : resp) {
            unordered_set<string> st(x.begin(), x.end());
            for (auto& y : st) {
                mp[y]++;
            }
        }
        // sort
        vector<pair<string, int>> res(mp.begin(), mp.end());
        sort(res.begin(), res.end(), [](auto& a, auto& b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second > b.second;
        });
        return res[0].first;
    }
};