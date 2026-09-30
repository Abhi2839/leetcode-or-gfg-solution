class Solution {
public:
    bool consecutiveSetBits(int n) {
        string s = "";
        while (n > 0) {
            s += n % 2;
            n /= 2;
        }
        int cnt = 0;
        for (int i = 1; s.length() > i; i++) {
            if (s[i] == 1 and s[i - 1] == 1)
                cnt++;
        }
        return cnt == 1;
    }
};