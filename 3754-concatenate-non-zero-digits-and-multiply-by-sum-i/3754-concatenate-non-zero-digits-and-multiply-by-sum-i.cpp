class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0, num = 0;
        while (n > 0) {
            int r = n % 10;
            if (r > 0) {
                num = num * 10 + r;
                sum += r;
            }
            n /= 10;
        }
        n = 0;
        while (num > 0) {
            int r = num % 10;
            n = n * 10 + r;
            num /= 10;
        }

        return n * sum;
    }
};