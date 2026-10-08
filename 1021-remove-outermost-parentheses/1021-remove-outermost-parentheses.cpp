class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int brack = 0;
        for (char c : s) {
            if (c == '(') {
                if (brack > 0) {
                    ans += c;
                }
                brack++;
            } else {
                brack--;
                if (brack > 0) {
                    ans += c;
                }
            }
        }
        return ans;
    }
};
