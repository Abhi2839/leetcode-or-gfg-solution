class Solution {
public:
    int sumdi(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        string ans = "";

        for (auto x : s) {
            ans += to_string((x - 'a') + 1);
        }
        int n = 0;

        for (auto x : ans) {
            n += x - '0';
        }
        k--;
        while (k--) {
            n = sumdi(n);
        }
        return n;
    }
};