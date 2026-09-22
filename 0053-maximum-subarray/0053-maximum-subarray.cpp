class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int ans1 = nums[0];
        for (int i = 1; nums.size() > i; i++) {
            ans = max(nums[i] + ans, nums[i]);
            ans1 = max(ans, ans1);
        }
        return ans1;
    }
};