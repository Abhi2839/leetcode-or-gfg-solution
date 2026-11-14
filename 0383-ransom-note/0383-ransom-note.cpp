class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char, int> mp;
        for (auto x : m)
            mp[x]++;
        for (auto x : r) {
            mp[x]--;
            if (mp[x] < 0)
                return 0;
        }
        return 1;
    }
};