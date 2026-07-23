class Solution {
public:
int dp[10][2][10];
    int solve(string& s, int idx, bool tight, int cnt) {
        if (s.size() == idx)
            return cnt;
        int lb = 0;
        int ub = tight ? s[idx] - '0' : 9;
        if (dp[idx][tight][cnt]!=-1) return dp[idx][tight][cnt];
        int res=0;
        for (int i = lb; ub >= i; i++) {
           res += solve(s, idx + 1, tight && (i == ub), cnt + (i == 1));
        }
        return dp[idx][tight][cnt]=res;
    }
    int countDigitOne(int n) {
        // int res=0;
        string num = to_string(n);
        memset(dp,-1,sizeof(dp));
        return solve(num, 0, true, 0);
    }
};