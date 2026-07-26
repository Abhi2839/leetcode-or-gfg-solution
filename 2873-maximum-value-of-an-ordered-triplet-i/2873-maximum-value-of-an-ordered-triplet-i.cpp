class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {

        int n = nums.size();
        long long prod = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] <= nums[j])
                    continue;
                    for (int k = j + 1; k < n; k++) {

                    prod = max(prod, 1LL * (nums[i] - nums[j]) * nums[k]);
                }
            }
        }

        return prod;
    }
};