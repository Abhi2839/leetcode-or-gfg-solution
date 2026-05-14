class Solution {
public:
    bool divideArray(vector<int>& nums) {
        // int ans = 0;
        // for (auto x : nums)
        //     ans ^= x;

        // return ans == 0;

        unordered_map<int, int> mp;
        for (auto x : nums)
            mp[x]++;

        for (auto x : mp) {
            if (x.second % 2 != 0)
                return false;
        }
        return true;
    }
};