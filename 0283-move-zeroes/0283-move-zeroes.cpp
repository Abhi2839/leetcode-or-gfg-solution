class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, k = 0, j = nums.size();
        while (j > k) {
            if (nums[i] == 0 and nums[k] == 0) {
                // i++;
                k++;
            } else if (nums[k] != 0 and nums[i] == 0) {
                swap(nums[k], nums[i]);
                k++;
                i++;
            } else {
                k++;
                i++;
            }
        }
    }
};