class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        //  min val and max val
        // k times val
        long long minv = nums[0], maxv = nums[0], ans;
        for (auto x : nums) {
            if (x < minv)
                minv = x;
            if (maxv < x)
                maxv = x;
        }
        ans = (maxv - minv) * k;
        return ans;
    }
};