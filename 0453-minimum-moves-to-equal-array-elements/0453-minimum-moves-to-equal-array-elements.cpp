class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0, mini = INT_MAX;
        for (auto x : nums)
            mini = min(mini, x);
        for (auto x : nums)
            ans += (x - mini);
        return ans;
    }
};