class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string words;
        vector<string> ans;
        while (ss >> words)
            ans.push_back(words);
        cout << ans[0];
        words = "";
        for (int i = 0; ans.size() / 2 > i; i++)
            swap(ans[i], ans[ans.size() - i - 1]);
        for (int i = 0; ans.size() - 1 > i; i++)
            words += ans[i] + " ";

        words += ans[ans.size() - 1];
        return words;
    }
};