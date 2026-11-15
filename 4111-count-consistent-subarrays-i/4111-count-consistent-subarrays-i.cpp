class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for (int i = 0; n > i; i++) {
            int bitw = nums[i], mini = INT_MAX;
            for (int j = i; n > j; j++) {
                mini = min(mini, nums[j]);
                bitw &= nums[j];
                if (mini == bitw)
                    cnt++;
            }
        }
        return cnt;
    }
};