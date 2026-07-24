class Solution {
public:
    int dp[25][2][500]; // idx tight sum
    int mod = 1e9 + 7;
    string updateed_low(string s) {
        int len = s.size() - 1;
        while (len > 0 and s[len] == '0') {
            s[len] = '9';
            len--;
        }
        if (len >= 0)
            s[len]--;
        if (s.length() > 0 and s[0] == '0')
            s.erase(0, 1);
        return s;
    }
    int solve(string& s, int idx, bool tight, int sum, int min_sum,
              int max_sum) {
        if (sum > max_sum)
            return 0;
        if (s.size() == idx)
            return sum >= min_sum;

            if (dp[idx][tight][sum]!=-1) return dp[idx][tight][sum];
        // return max_sum >= s and s >= min_sum;

        int lb = 0;
        int ub = tight ? s[idx] - '0' : 9;
        int res = 0;
        for (int i = lb; ub >= i; i++) {
            res +=solve(s, idx + 1, tight && (i == ub), sum + i, min_sum, max_sum);
            res=res%mod;
        }
        return dp[idx][tight][sum]=res;
    }
    int count(string num1, string num2, int min_sum, int max_sum) {
        memset(dp, -1, sizeof(dp));
        num1 = updateed_low(num1);
        int ans1 = solve(num1, 0, 1, 0, min_sum, max_sum);
        memset(dp, -1, sizeof(dp));
        int ans2 = solve(num2, 0, 1, 0, min_sum, max_sum);

        return (ans2 - ans1+mod) % mod;
    }
};