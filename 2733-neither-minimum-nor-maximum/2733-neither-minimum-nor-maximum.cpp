class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int ans = -1, mini = nums[0], maxi = nums[0], n = nums.size();

        for (auto x : nums) {
            if (x > maxi)
                maxi = x;
            if (mini > x)
                mini = x;
        }
        for (auto x : nums)
            if (x != maxi and x != mini)
                ans = x;
        return ans;
    }
};