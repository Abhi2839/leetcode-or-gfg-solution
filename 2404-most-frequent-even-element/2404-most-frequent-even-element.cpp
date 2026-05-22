class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto x : nums) {
            if (x % 2 == 0)
                mp[x]++;
        }
        // base case
        if (mp.empty())
            return -1;
        // sort acc to freq

        vector<pair<int, int>> ans(mp.begin(), mp.end());
        sort(ans.begin(), ans.end(), [](auto& a, auto& b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second > b.second; // larger freq
        });

        return ans[0].first;
    }
};