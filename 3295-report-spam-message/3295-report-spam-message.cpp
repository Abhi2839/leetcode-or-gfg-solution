class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string> st;
        for (auto x : bannedWords)
            st.insert(x);
        int cnt = 0;
        for (auto x : message) {
            if (st.count(x))
                cnt++;
            if (cnt >= 2)
                return 1;
        }
        return 0;
    }
};