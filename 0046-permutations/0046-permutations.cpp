class Solution {
public:
    void solve(int i, vector<int>& nums, vector<vector<int>>& ans) {
        // int n = nums.size();
        if (i == nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int j = i; nums.size() > j; j++) {
            swap(nums[i], nums[j]);
            solve(i + 1, nums, ans);
            swap(nums[i], nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        // ans
        vector<vector<int>> ans;
        // int n = nums.size();
        solve(0, nums, ans);
        return ans;
    }
};