class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int r = s.length(), l = 0;
        unordered_set<char> st;
        for (int i = 0; s.length() > i; i++) {
            while (st.count(s[i])) {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[i]);
            ans = max(ans, i + 1 - l);
        }
        return ans;
    }
};