class Solution {
public:
    string greatestLetter(string s) {

        unordered_set<char> st;
        for (auto x : s)
            st.insert(x);
        string ans = "";
        for (char i = 'a'; 'z' >= i; i++) {
            if (st.count(toupper(i)) and st.count(i))
                ans = toupper(i);
        }
        return ans;
    }
};