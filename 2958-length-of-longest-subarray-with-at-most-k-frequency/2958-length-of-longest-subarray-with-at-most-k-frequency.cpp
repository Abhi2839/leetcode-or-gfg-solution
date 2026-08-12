class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int len = 0;
        unordered_map<int, int> mp;
        int l = 0;
        int n = nums.size();
        for (int i = 0; n > i; i++) {
            mp[nums[i]]++;
            while (mp[nums[i]] > k) {
                mp[nums[l]]--;
                l++;
            }
            len = max(len, i - l + 1);
        }
        return len;
    }
};