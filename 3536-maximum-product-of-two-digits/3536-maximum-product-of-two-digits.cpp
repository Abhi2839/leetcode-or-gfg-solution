class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end());
        int y = s.length();
        return (s[y - 1] - '0') * (s[y - 2] - '0');
    }
};