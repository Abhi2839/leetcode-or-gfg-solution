class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> st;

        for (char x : s) {
            if (st.count(x)) {
                return x;
            }
            st.insert(x);
        }

        return '\0';
    }
};