class Solution {
public:
    set<vector<int>> st;

    void solve(vector<int>& nums, int i) {
        if (i == nums.size()) {
            st.insert(nums);
            return;
        }

        for (int j = i; j < nums.size(); j++) {
            swap(nums[i], nums[j]);
            solve(nums, i + 1);
            swap(nums[i], nums[j]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(nums, 0);
        return vector<vector<int>>(st.begin(), st.end());
    }
};