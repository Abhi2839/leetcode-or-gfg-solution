class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int mid = nums[n / 2];
        for (auto x : nums)
            ans += abs(mid - x);
        return ans;
    }
};