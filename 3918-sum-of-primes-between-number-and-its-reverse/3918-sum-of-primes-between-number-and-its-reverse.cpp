class Solution {
public:
    int prime(int a) {
        if (1 >= a)
            return 0;
        for (int i = 2; i * i <= a; i++) {
            if (a % i == 0)
                return 0;
        }
        return 1;
    }
    int sumOfPrimesInRange(int n) {
        string a = to_string(n);
        reverse(a.begin(), a.end());

        int rev = stoi(a);
        int l = min(n, rev);
        int h = max(rev, n);
        int sum = 0;
        for (int i = l; h >= i; i++) {
            if (prime(i))
                sum += i;
        }
        return sum;
    }
};