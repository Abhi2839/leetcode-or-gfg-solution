class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0;
        for (string& word : words) {
            int len = word.length(), cnt1 = 0;
            if (len > s.length())
                continue;
                
            for (int i = 0; len > i; i++) {
                if (word[i] == s[i])
                    cnt1++;
            }
            if (cnt1 == len)
                cnt++;
        }
        return cnt;
    }
};