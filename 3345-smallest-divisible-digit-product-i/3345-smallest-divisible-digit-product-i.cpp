class Solution {
public:
    bool check(int n, int k) {
        int sum = 1;
        while (n > 0) {
            sum *= n % 10;
            n /= 10;
        }
        return sum % k == 0;
    }
    int smallestNumber(int n, int t) {
        int ans;
        while (true) {
            if (!check(n, t))
                n++;
            else {
                ans = n;
                break;
            }
        }
        return ans;
    }
};