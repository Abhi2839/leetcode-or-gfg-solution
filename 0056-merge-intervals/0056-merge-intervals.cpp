class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        ans.push_back(arr[0]);
        int n = arr.size();
        for (int i = 1; n > i; i++) {
            vector<int>& last = ans.back();
            vector<int>& curr = arr[i];
            if (last[1] >= curr[0])
                last[1] = max(curr[1], last[1]);
            else
                ans.push_back(curr);
        }
        return ans;
    }
};