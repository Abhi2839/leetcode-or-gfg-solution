class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_map<string, int> mp;
        for (auto x : bannedWords)
            mp[x]++;
        int cnt = 0;
        for (auto x : message) {
            if (mp[x] >= 1)
                cnt++;
        }
        return cnt >= 2;
    }
};