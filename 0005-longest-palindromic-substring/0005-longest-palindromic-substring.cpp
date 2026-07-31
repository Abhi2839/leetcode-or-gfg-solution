class Solution {
public:
    string longestPalindrome(string s) {
        // odd len even len palindrome should be handle separate
        // using wrap aroung center method
        int startIdx = 0, len = 1;
        int n = s.length();
        for (int i = 0; n > i; i++) {
            int l = i, r = i;
            while (l >= 0 and n > r and s[l] == s[r]) {
                if ((r + 1 - l) > len) {
                    startIdx = l;
                    len = r + 1 - l;
                }
                l--;
                r++;
            }
            l = i, r = i + 1;
            while (l >= 0 and n > r and s[l] == s[r]) {
                if ((r + 1 - l) > len) {
                    startIdx = l;
                    len = r + 1 - l;
                }

                r++;
                l--;
            }
        }
        return s.substr(startIdx, len);
    }
};