class Solution {
public:
    string evaluate(string s, vector<vector<string>>& arr) {
        unordered_map<string, string> mp;

        for (auto x : arr) {
            mp[x[0]] = x[1];
        }
        string ans = "";
        int i = 0;
        while (i < s.length()) {
            if (s[i] != '(') {
                ans += s[i];
                i++;
            } else {
                int j = i + 1;
                while (s[j] != ')') {
                    j++;
                }
                string temp = s.substr(i + 1, j - i - 1);
                if (mp.find(temp) != mp.end())
                    ans += mp[temp];
                else
                    ans += "?";
                i = j + 1;
            }
        }
        return ans;
    }
};