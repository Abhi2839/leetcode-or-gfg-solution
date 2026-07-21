class Solution {
public:
    // to check whether pattern matches or not
    bool check(string word, string pattern) {
        unordered_map<char, char> wp; // word to apttern
        unordered_map<char, char> pw; // pattern to word
        if (word.size() != pattern.size())
            return 0;
        int n = word.size();

        for (int i = 0; n > i; i++) {
            if (wp.count(pattern[i]) and wp[pattern[i]] != word[i])
                return 0;
            if (pw.count(word[i]) and pw[word[i]] != pattern[i])
                return 0;
            wp[pattern[i]] = word[i];
            pw[word[i]] = pattern[i];
        }
        return 1;
    }
    vector<string> findAndReplacePattern(vector<string>& words,
                                         string pattern) {
        vector<string> ans;

        for (int i = 0; words.size() > i; i++) {
            if (check(words[i], pattern))
                ans.push_back(words[i]);
        }
        return ans;
    }
};