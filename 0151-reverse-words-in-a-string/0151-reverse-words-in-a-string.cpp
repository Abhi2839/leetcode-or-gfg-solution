class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string words;
        vector<string> ans;
        while (ss >> words) {
            ans.push_back(words);
        }
        reverse(ans.begin(), ans.end());
        string st = "";
        for (int i = 0; ans.size() - 1 > i; i++) {
            st += ans[i] + " ";
        }
        return st + ans[ans.size() - 1];
    }
};