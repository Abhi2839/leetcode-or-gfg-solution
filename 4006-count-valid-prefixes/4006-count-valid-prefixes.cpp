class Solution {
public:
    int countValidPrefixes(string s) {
        int cnt = 0, zero = 0, one = 0;
        for (auto x : s) {
            if (x == '0')
                zero++;
            else
                one++;
            if (abs(zero - one) <= 1)
                cnt++;
        }
        return cnt;
    }
};