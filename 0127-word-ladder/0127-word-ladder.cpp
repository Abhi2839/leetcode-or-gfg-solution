class Solution {
public:
    int ladderLength(string beginWord, string endWord,
                     vector<string>& wordList) {

        unordered_set<string> st(wordList.begin(), wordList.end());
        if (st.count(endWord) == 0)
            return 0; // base case
        queue<pair<string, int>> qu;
        qu.push({beginWord, 1});

        while (!qu.empty()) {
            auto [word, step] = qu.front();
            qu.pop();

            if (word == endWord)
                return step;

            for (int i = 0; word.length() > i; i++) {
                char ch = word[i];
                for (char j = 'a'; 'z' >= j; j++) {
                    word[i] = j;
                    if (st.count(word)) {
                        st.erase(word);
                        qu.push({word, step + 1});
                    }
                    word[i] = ch;
                }
            }
        }
        return 0;
    }
};