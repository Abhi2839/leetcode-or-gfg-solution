class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l = 0, ans = 0;
        for (int i = 0; s.length() > i; i++) {
            while (st.count(s[i])) {
                cout << s[l];

                st.erase(s[l]);
                l++;
            }
            ans = max(ans, i + 1 - l);
            st.insert(s[i]);
        }
        return ans;
    }
};