class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len =0;
        int l=0;
        unordered_set<char>st;
        for (int r=0;s.length()>r;r++){
            while(st.count(s[r])){
                st.erase(s[l++]);
            }
            st.insert(s[r]);
            len=max(len,r+1-l);
        }
        return len;
    }
};