class Solution {
public:
    string ans = "";

    void rec(int n, int &k, string s) {
        if (s.length() == n) {
            k--;

            if (k == 0) {
                ans = s;
            }
            return;
        }

        for (int i = 1; i <= n; i++) {
            char ch = char(i + '0');
            // to prevent duplicacy
            if (s.find(ch) != string::npos)
                continue;

            s.push_back(ch);

            rec(n, k, s);

            if (!ans.empty())
                return;

            s.pop_back();
        }
    }

    string getPermutation(int n, int k) {
        rec(n, k, "");
        return ans;
    }
};
