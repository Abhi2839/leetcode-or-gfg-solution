class Solution {
public:
    int reverse(int x) {
        long long num = 0;
        while (x) {
            num = num * 10 + x % 10;
            x /= 10;
        }
        if (num>INT_MAX or num<INT_MIN) return false;
        return (int)num;
    }
};