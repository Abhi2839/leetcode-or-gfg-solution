class Solution {
public:
    int digit_sum(int a) {
        int sum = 0;
        while (a > 0) {
            sum += a % 10;
            a /= 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; nums.size() > i; i++) {
            if (digit_sum(nums[i]) == i)
                return i;
        }
        return -1;
    }
};