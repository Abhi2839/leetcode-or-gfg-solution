class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int len = 0, maxfreq = 0;
        int i = 0;

        for (int j = 0; s.size() > j; j++) {
            mp[s[j]]++;
            maxfreq = max(maxfreq, mp[s[j]]);

            while ( (j - i + 1) - maxfreq > k) {
                mp[s[i]]--;
                i++;
            }
            len = max(len, j - i + 1);
        }

        return len;
    }
};

// ABAB
// k=2

// map
//