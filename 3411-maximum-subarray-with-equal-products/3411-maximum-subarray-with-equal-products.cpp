class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 2, l = 0, prod = 1;
        for (int r = 0; nums.size() > r; ++r) {
            int x = nums[r];
            while (gcd(prod, x) > 1)
                prod /= nums[l++];
            prod *= x;
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};