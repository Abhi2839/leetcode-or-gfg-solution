class Solution {
public:
    int minMutation(string s, string e, vector<string>& bank) {
        unordered_set<string> st(bank.begin(), bank.end());
        queue<pair<string, int>> qu;

        char arr[4] = {'A', 'G', 'T', 'C'};
        qu.push({s, 0});

        while (!qu.empty()) {
            auto [word, step] = qu.front();
            qu.pop();
            if (word == e)
                return step;
            for (int i = 0; word.length() > i; i++) {
                char ch = word[i];
                for (int k = 0; 4 > k; k++) {
                    word[i] = arr[k];
                    if (st.count(word) > 0) {
                        qu.push({word, step + 1});
                        st.erase(word);
                    }
                    word[i] = ch;
                }
            }
        }
        return -1;
    }
};