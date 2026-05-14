class Solution {
public:
    bool isGood(vector<int>& nums) {
        // max element
        int n = nums[0];
        for (auto x : nums)
            if (x > n)
                n = x;
        // base vase
        if (nums.size() != n + 1)
            return false;

        unordered_map<int, int> mp;
        for (auto x : nums)
            mp[x]++;

        for (int i = 1; n > i; i++) {
            if (mp[i] != 1)
                return false;
        }
        return mp[n] == 2;
    }
};