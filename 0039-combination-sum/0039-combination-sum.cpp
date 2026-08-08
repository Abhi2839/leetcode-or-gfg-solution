class Solution {
public:
    set<vector<int>> ans;
    void solve(int i, vector<int>& arr, int target, vector<int>& s) {
        if (target == 0) {
            // sort(s.begin(), s.end());
            ans.insert(s);
            return;
        }
        if (target < 0)
            return;
        for (int j = i; arr.size() > j; j++) {
            s.push_back(arr[j]);
            solve(j, arr, target - arr[j], s);
            s.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> ar;
        sort(arr.begin(), arr.end());
        solve(0, arr, target, ar);

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};