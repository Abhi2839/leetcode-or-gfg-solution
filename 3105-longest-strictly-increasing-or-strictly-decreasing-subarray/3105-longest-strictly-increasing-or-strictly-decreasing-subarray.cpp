class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int inc = 1, desc = 1;
        int ans = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                inc = inc + 1;
                desc = 1;
            } else if (nums[i] < nums[i - 1]) {
                desc = desc + 1;
                inc = 1;
            } else {
                inc = 1;
                desc = 1;
            }
            ans = max({ans, inc, desc});
        }
        return ans;
    }
};