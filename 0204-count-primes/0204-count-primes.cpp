class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;
        for (int p = 2; p < n; p++) {
            if (prime[p] == true) {
                cnt++;
                for (int i = p; i < n; i += p)
                    prime[i] = false;
            }
        }

        return cnt;
    }
};