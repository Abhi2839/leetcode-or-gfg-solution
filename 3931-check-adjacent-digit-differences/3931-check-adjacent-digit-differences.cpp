class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {

        for (int i = 1; s.length() > i; i++) {
            int n = s[i] - '0';
            int m = s[i - 1] - '0';
            if (abs(n - m) > 2)
                return false;
        }
        return true;
    }
};