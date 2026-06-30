class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans = 0, l = 0;
        int n = s.length();
        int freq[3] = {0};
        for (int i = 0; n > i; i++) {
            freq[s[i] - 'a']++;
            while (freq[0] and freq[1] and freq[2]) {
                ans += (n - i);
                freq[s[l] - 'a']--;
                l++;
            }
        }
        return ans;
    }
};