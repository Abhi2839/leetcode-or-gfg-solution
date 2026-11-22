class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return 1;
        int cnt = 0;
        if (nums[0] >= nums[1])
            cnt++;
        if (nums[n - 2] <= nums[n - 1])
            cnt++;
        for (int i = 1; n - 1 > i; i++) {
            if (2 * nums[i] >= (nums[i - 1] + nums[i + 1]))
                cnt++;
        }
        return cnt;
    }
};