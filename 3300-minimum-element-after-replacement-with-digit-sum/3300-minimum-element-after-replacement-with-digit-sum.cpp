class Solution {
public:
    int su(int a) {
        int cnt = 0;
        while (a > 0) {
            cnt += a % 10;
            a /= 10;
        }
        return cnt;
    }
    int minElement(vector<int>& nums) {
        for (int i = 0; nums.size() > i; i++)
            nums[i] = su(nums[i]);

        int ele = nums[0];
        for (auto x : nums) {
            if (ele > x)
                ele = x;
        }
        return ele;
    }
};