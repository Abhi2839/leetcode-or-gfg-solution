class Solution {
public:
    int sum(int a) {
        int s = 0;
        while (a > 0) {
            s += a % 10;
            a /= 10;
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; nums.size() > i; i++) {
            if (sum(nums[i]) == i)
                return i;
        }
        return -1;
    }
};