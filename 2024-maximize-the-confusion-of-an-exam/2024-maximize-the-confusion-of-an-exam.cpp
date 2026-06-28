class Solution {
public:
    int cnt(string str, int k, char c) {
        int cnttf = 0, l = 0, len = 0;
        for (int i = 0; str.size() > i; i++) {
            if (str[i] != c)
                cnttf++;
            while (cnttf > k) {
                if (str[l] != c)
                    cnttf--;
                l++;
            }
            len = max(len, i + 1 - l);
        }
        return len;
    }
    int maxConsecutiveAnswers(string str, int k) {
        // int ans=0;
        int cntt = 0, cntf = 0;
        cntt = cnt(str, k, 'T');
        cntf = cnt(str, k, 'F');
        return max(cntt, cntf);
    }
};