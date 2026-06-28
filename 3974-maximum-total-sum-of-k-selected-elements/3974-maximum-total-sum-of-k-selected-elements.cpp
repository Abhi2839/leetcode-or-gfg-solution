class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long ans = 0;
        sort(nums.rbegin(), nums.rend());
        for (int i = 0; k > i; i++) {
            if (mul > 1)
                ans += 1LL * nums[i] * mul;
            else
                ans += nums[i];
            mul--;
        }
        return ans;
    }
};