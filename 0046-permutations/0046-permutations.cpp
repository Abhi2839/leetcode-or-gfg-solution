class Solution {
public:
    void solve(int j, vector<int>& nums, vector<vector<int>>& ans) {
        if (j == nums.size()) {
            ans.push_back(nums);
            return;
        }
        for (int i = j; nums.size() > i; i++) {
            swap(nums[i], nums[j]);
            solve(j + 1, nums, ans);
            swap(nums[i], nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        // ans.push_back(nums);
        solve(0, nums, ans);
        return ans;
    }
};