class Solution {
public:

    int sum_factor(int n) {
        int sum = 0;

        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                sum += i;
                n /= i;
            }
        }
        if (n > 1)
            sum += n;

        return sum;
    }

    int smallestValue(int n) {

        while (true) {
            int sum = sum_factor(n);

            if (sum == n)
                return n;

            n = sum;
        }
    }
};