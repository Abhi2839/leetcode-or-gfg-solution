class Solution {
public:
    vector<string> ans;
    void solve(string s, int n, int i, int j) {
        if (s.length() == 2 * n) {
            ans.push_back(s);
            return;
        }
        if (n > i) {
            s.push_back('(');
            solve(s, n, i + 1, j);
            s.pop_back();
        }
        if (i > j) {
            s.push_back(')');
            solve(s, n, i, j + 1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        solve(s, n, 0, 0);
        return ans;
    }
};