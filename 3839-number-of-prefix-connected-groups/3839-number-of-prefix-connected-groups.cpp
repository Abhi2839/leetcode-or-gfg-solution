class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        int cnt = 0;
        unordered_map<string, vector<string>> mp;
        for (auto x : words) {
            if (x.length() < k)
                continue;
            mp[x.substr(0, k)].push_back(x);
        }
        for (auto& it : mp) {
            if (it.second.size() >= 2)
                cnt++;
        }
        return cnt;
    }
};