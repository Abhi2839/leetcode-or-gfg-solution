class Solution {
public:
    string convert(string s, int n) {
        string ans = "";
         if (1>=n) return s;
        vector<string> res(n);
        int step = 1;
        int row = 0;
        for (auto ch : s) {
            res[row].push_back(ch);
            if (row == 0)
                step = 1;
            else if (row == n - 1)
                step = -1;
            row += step;
        }
        for (auto ch : res)
            ans += ch;
        return ans;
    }
};