class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0, len = pref.length();
        for (string& x : words) {
            int l = x.length(), cnt1 = 0;
            if (len > l)
                continue;
            for (int i = 0; min(len, l) > i; i++) {
                if (pref[i] == x[i])
                    cnt1++;
                else
                    break;
            }
            if (cnt1 == len)
                cnt++;
        }
        return cnt;
    }
};