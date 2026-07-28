class Solution {
public:
    string smallestPalindrome(string s) {
        // basic idea to make freq arr till n/2 length
        int n = s.length();
        int freq[26] = {0};
        for (int i = 0; n / 2 > i; i++)
            freq[s[i] - 'a']++;
        int j = 0;
        for (int i = 0; 26 > i; i++) {
            while (freq[i]-- > 0)
                s[j++] = (char)(i + 'a');
        }
        for (int i = 0; n / 2 > i; i++) {
            s[n - i - 1] = s[i];
        }

        return s;
    }
};