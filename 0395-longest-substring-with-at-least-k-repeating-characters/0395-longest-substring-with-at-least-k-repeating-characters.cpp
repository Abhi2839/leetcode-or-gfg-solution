class Solution {
public:
    int longestSubstring(string s, int k) {
        if (k == 0)
            return 0;
        unordered_map<char, int> mp;
        for (auto x : s)
            mp[x]++;

        for (int i = 0; s.length() > i; i++) {
            if (mp[s[i]] < k) {
                int l = longestSubstring(s.substr(0, i), k);
                int r = longestSubstring(s.substr(i + 1), k);
                return max(l, r);
            }
        }

        return s.size();
    }
};