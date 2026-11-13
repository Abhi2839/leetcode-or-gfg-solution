class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; n > i; i++) {
            if (mp.find(nums[i]) != mp.end()) {
                int idx = mp[nums[i]];
                if (abs(idx - i) <= k)
                    return 1;
                else
                    mp[nums[i]] = i;
            } else
                mp[nums[i]] = i;
        }
        return 0;
    }
};