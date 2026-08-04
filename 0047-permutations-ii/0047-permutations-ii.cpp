class Solution {
public:
    vector<vector<int>> ans;
    set<vector<int>> st;
    void solve(vector<int>& nums, int i, int n) {
        if (i == nums.size()) {
            st.insert(nums);
            return;
        }
        for (int j = i; n > j; j++) {
            swap(nums[i], nums[j]);
            solve(nums, i + 1, n);
            swap(nums[i], nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        solve(nums, 0, n);
        return vector<vector<int>>(st.begin(), st.end());
    }
};