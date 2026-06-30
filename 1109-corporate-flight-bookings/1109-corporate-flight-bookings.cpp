class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& arr, int n) {
        vector<int> ans(n,0);
        for (auto x : arr) {
            int f = x[0];
            int l = x[1];
            int s = x[2];
            ans[f - 1] += s;
            if (n > l)
             ans[l] -= s;
        }
        for (int i = 1; n > i; i++)
            ans[i] += ans[i - 1];
        return ans;
    }
};