class Solution {
public:
    int maximumLengthSubstring(string s) {
        int j = 2, len = 0;
        unordered_map<char, int> mp;
        int l = 0, n = s.length();
        for (int i = 0; n > i; i++) {
            mp[s[i]]++;
            while (mp[s[i]] > j) {
                mp[s[l]]--;
                l++;
            }
            len = max(len, i + 1 - l);
        }
        return len;
    }
};