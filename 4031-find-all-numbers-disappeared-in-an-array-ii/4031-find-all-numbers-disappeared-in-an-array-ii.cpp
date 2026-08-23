class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower,
                                               int upper) {
        unordered_set<int> st(nums.begin(), nums.end());
        vector<vector<int>> ans;

        int i = lower;

        while (i <= upper) {

            if (st.count(i)) {
                i++;
                continue;
            }
            int s = i;
            while (i <= upper && st.count(i) == 0)
                i++;

            ans.push_back({s, i - 1});
        }

        return ans;
    }
};