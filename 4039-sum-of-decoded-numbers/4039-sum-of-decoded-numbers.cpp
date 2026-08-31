class Solution {
public:
    long long power(long long x, long long y) {
        long long MOD = 1e9 + 7;
        long long res = 1;
        while (y > 0) {
            if (y & 1) {
                res = res * x % MOD;
            }
            x = x * x % MOD;
            y >>= 1;
        }
        return res;
    }
    int sumDecoded(vector<long long>& nums) {
        int n = nums.size();
        int ans = 0;
        int MOD = 1e9 + 7;
        for (int i = 0; i < n; i++) {
            long long x = nums[i];
            long long width = nums[i] % 10;
            long long d = nums[i] / 10;
            string s = to_string(d);
            string st = s.substr(0, width);
            string e = s.substr(width);

            long long xi = stoll(st);
            long long yi = stoll(e);
            long long p = power(xi, yi);
            p = p % MOD;
            ans = (long long)(ans + p) % MOD;
        }
        return ans;
    }
};