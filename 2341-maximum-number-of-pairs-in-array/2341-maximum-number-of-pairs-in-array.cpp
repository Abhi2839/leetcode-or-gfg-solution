class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto x : nums)
            mp[x]++;
        int ans = 0, cnt = 0;
        for (auto x : mp) {
            ans += x.second / 2;
            cnt += x.second % 2;
        }
        return {ans, cnt};
    }
};