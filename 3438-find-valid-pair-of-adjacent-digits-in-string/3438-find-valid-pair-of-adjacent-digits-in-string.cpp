class Solution {
public:
    string findValidPair(string s) {
        vector<int> freq(10, 0);
        int n = s.size();
        for (int i = 0; i < n; i++) {
            freq[s[i] - '0']++;
        }

        string ans;
        for (int i = 0; i < n - 1; i++) {
            int f = s[i] - '0';
            int se = s[i + 1] - '0';
            if (f != se && f == freq[s[i] - '0'] &&
                se == freq[s[i + 1] - '0']) {
                ans.push_back(s[i]);
                ans.push_back(s[i + 1]);
                break;
            }
        }
        return ans;
    }
};