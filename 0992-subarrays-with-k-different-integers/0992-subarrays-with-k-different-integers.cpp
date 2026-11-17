class Solution {
public:
    int ans(vector<int> nums, int k) {
        int cnt = 0;
        int n = nums.size();
        unordered_map<int, int> mp;
        int l = 0, r = 0;

        while (n > r) {
            int x = nums[r];
            mp[x]++;
            if (mp[x] == 1)
                k--;
            while (0 > k) {
                int y = nums[l];
                mp[y]--;
                if (mp[y] == 0)
                    k++;
                l++;
            }
            cnt += (r + 1 - l);
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return ans(nums, k) - ans(nums, k - 1);
    }
};