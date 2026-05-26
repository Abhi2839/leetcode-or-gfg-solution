class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cnt = 0;
        unordered_set<char> st;
        for (auto x : word)
            st.insert(x);

        for (char i = 'a'; 'z' >= i; i++) {
            if (st.count(toupper(i)) and st.count(i))

                cnt++;
        }
        return cnt;
    }
};