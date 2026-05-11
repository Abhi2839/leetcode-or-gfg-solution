class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n = nums.size() - 1;
        while (n > 0 and nums[n] > nums[n - 1])
            n--;
        return n;
    }
};