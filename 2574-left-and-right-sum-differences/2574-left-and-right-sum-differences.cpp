class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int rs = 0;
        for (auto x : nums)
            rs += x;
        int ls = 0;
        for (int i = 0; n > i; i++) {
            rs -= nums[i];
            ans[i] = abs(rs - ls);
            ls += nums[i];
        }
        return ans;
    }
};