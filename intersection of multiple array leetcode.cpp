class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        unordered_map<int, int> mp;
        int m = nums.size();
        for (int i = 0; m > i; i++) {
            for (auto z : nums[i]) {
                mp[z]++;
            }
        }
        for (auto x : mp) {
            if (x.second == m)
                ans.push_back(x.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};