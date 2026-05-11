class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = -1;
        for (auto x : nums)
            mp[x]++;
        for (auto x : nums)
            if (mp[x] > 1)
                ans = x;

        return ans;
    }
};