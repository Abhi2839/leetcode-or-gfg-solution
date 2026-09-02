class Solution {
public:
    string s = "";
    void func(vector<string>& ans, int n, int i, int j) {
        if (s.length() == 2 * n) {
            ans.push_back(s);
            return;
        }
        if (n > i) {
            s.push_back('(');
            func(ans, n, i + 1, j);
            s.pop_back();
        }
        if (i > j) {
            s.push_back(')');
            func(ans, n, i, j + 1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        func(ans, n, 0, 0);
        return ans;
    }
};