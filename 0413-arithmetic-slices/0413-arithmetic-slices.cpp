class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if (nums.size() < 3)
            return 0;
        int ans = 0, cnt = 0;
        int di = nums[1] - nums[0];
        for (int i = 1; nums.size() - 1 > i; i++) {
            int diff = nums[i+1] - nums[i];
            if (diff == di)
                cnt++;
            else {
                di = diff;
                cnt = 0;
            }
            ans += cnt;
        }
        return ans;
    }
};