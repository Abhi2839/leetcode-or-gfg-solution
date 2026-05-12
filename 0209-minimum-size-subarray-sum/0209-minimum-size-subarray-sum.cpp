class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // subarray that is equal to tgt
        int len = INT_MAX, n = nums.size();
        int l = 0;
        int sum = 0;

        for (int i = 0; n > i; i++) {
            sum += nums[i];
            while (sum >= target and n > l) {
                len = min(len, i + 1 - l);
                sum -= nums[l++];
            }
        }
        return len == INT_MAX ? 0 : len;
    }
};