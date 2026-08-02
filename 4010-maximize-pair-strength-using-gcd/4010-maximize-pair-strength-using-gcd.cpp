class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        for (int i = 0; n > i; i++) {
            for (int j = i + 1; n > j; j++) {
                long long gcd = __gcd(nums[i], nums[j]);
                ans = max(ans, (1LL * nums[i] * nums[j]) / (gcd * gcd));
            }
        }
        return ans;
    }
};