class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
                                          vector<vector<int>>& items2) {

        vector<vector<int>> ans;
        unordered_map<int, int> mp;
        for (auto x : items1)
            mp[x[0]] += x[1];
        for (auto x : items2)
            mp[x[0]] += x[1];

        for (auto x : mp)
            ans.push_back({x.first, x.second});
        sort(ans.begin(), ans.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });
        return ans;
    }
};