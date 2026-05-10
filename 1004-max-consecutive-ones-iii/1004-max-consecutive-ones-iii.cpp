class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len = 0, l = 0;
        int cnt_zero = 0;
        for (int i = 0; nums.size() > i; i++) {
            if (nums[i] == 0)
                cnt_zero++;
            while (cnt_zero > k) {
                if (nums[l] == 0)
                    cnt_zero--;
                l++;
            }
            len = max(len, i + 1 - l);
        }
        return len;
    }
};