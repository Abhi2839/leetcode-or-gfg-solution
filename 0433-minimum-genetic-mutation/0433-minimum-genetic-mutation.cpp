class Solution {
public:
    int minMutation(string s, string e, vector<string>& arr) {
        unordered_set<string> st(arr.begin(), arr.end());
        queue<pair<string, int>> qu;
        qu.push({s, 0});
        char se[4] = {'A', 'C', 'G', 'T'};
        while (!qu.empty()) {
            auto [word, step] = qu.front();
            qu.pop();
            if (word == e)
                return step;

            for (int i = 0; word.length() > i; i++) {
                char ch = word[i];
                for (int k = 0; 4 > k; k++) {
                    word[i] = se[k];
                    if (st.count(word)) {
                        st.erase(word);
                        qu.push({word, step + 1});
                    }
                }
                word[i] = ch;
            }
        }
        return -1;
    }
};