class Solution {
public:
    int fun(int n) {
        int sum = 0, prod = 1;
        while (n > 0) {
            int r = n % 10;
            sum += r;
            prod *= r;
            n /= 10;
        }
        return sum + prod;
    }
    bool checkDivisibility(int n) { return n % (fun(n)) == 0; }
};