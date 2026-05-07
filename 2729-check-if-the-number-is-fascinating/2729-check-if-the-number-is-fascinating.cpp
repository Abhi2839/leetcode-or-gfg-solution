class Solution {
public:
    bool isFascinating(int n) {
        int se = 2 * n;
        int third = 3 * n;

        string s = to_string(n) + to_string(se) + to_string(third);

        unordered_map<char, int> mp;
        for (auto x : s)
            mp[x]++;

        if (s.length() != 9)
            return 0;

        if (s.length() == 9) {
            for (int i = 0; s.length() > i; i++) {
                if (mp[s[i]] > 1 or mp[s[i]] < 1 or s[i]=='0')
                    return 0;
            }
        }
        return 1;
    }
};