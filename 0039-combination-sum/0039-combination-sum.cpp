class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;
    void solve(vector<int>& arr, int tgt, int idx) {
        if (tgt == 0) {
            ans.push_back(curr);
            return;
        }
        if (0 > tgt)
            return;
        for (int i = idx; arr.size() > i; i++) {
            curr.push_back(arr[i]);
            tgt -= arr[i];
            solve(arr, tgt, i);
            curr.pop_back();
            tgt += arr[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int tgt) {
        solve(arr, tgt, 0);
        return ans;
    }
};