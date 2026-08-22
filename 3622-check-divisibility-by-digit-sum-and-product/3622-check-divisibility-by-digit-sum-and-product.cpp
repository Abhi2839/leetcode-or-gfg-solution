class Solution {
public:
    int sum(int n) {
        int s = 0;
        while (n > 0) {
            int r = n % 10;
            s += r;
            n /= 10;
        }
        return s;
    }
    int pro(int n) {
        int p = 1;
        while (n > 0) {
            int r = n % 10;
            p *= r;
            n /= 10;
        }
        return p;
    }
    bool checkDivisibility(int n) { return n%(sum(n) + pro(n)) == 0; }
};