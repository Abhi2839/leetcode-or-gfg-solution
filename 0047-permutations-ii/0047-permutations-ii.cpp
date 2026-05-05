class Solution {
public:
    void solve(int i, vector<int>& nums, vector<vector<int>>& ans) {
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
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        // set<vector<int>>st;
        solve(0, nums, ans);
        set < vector<int>> st(ans.begin(), ans.end());
        ans.assign(st.begin(), st.end());
        return ans;
    }
};