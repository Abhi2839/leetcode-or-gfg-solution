class Solution {
public:
    bool palindrome(string s, int i, int j) {
        while (j > i) {
            if (s[j] != s[i])
                return false;
            i++;
            j--;
        }
        return true;
    }

    //  backstracking for every possibility
    void backstrack(int i, string s, vector<string>& palndrme,
                    vector<vector<string>>& ans) {
        // base case
        if (i == s.length()) {
            ans.push_back(palndrme);
            return;
        }

        for (int j = i; s.length() > j; j++) {
            if (palindrome(s, i, j)) {
                palndrme.push_back(s.substr(i, j - i + 1));
                backstrack(j + 1, s, palndrme, ans);
                palndrme.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> path;
        vector<vector<string>> ans;
        backstrack(0, s, path, ans);
        return ans;
    }
};