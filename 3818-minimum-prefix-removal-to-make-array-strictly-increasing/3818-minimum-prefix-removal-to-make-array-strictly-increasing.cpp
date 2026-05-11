class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        // traverse from n-1 and compare n-1 > n-2 i>0;
        // return i;
        int i = nums.size() - 1;
        while (i > 0 and nums[i] > nums[i - 1])
            i--;
        return i;
    }
};