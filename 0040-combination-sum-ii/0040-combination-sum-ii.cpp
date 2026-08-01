class Solution {
public:
    set<vector<int>> st;
    vector<int> curr;
    void solve(vector<int>& arr, int tgt, int idx) {
        if (tgt == 0) {
            st.insert(curr);  return;
        }
        if (0 > tgt) return;

        for (int i = idx; arr.size() > i; i++) {
            if (i > idx and arr[i] == arr[i - 1]) continue;
            if (arr[i] > tgt) break;
            curr.push_back(arr[i]);
            solve(arr, tgt - arr[i], i + 1);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int tgt) {
        sort(arr.begin(), arr.end());
        solve(arr, tgt, 0);
        return vector<vector<int>>(st.begin(), st.end());
    }
};