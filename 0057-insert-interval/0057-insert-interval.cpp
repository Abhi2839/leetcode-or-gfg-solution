class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& ii, vector<int>& ni) {
        // ii.push_back(ni);
        // sort(ii.begin(), ii.end());
        int n = ii.size();

        // binary search for finding pos for new interval

        int l = 0, h = n - 1;
        int pos = n;

        while (l <= h) {

            int mid = l + (h - l) / 2;

            if (ii[mid][0] >= ni[0]) {
                pos = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        ii.insert(ii.begin() + pos, ni);

        vector<vector<int>> ans;
        ans.push_back(ii[0]);

        for (int i = 1; ii.size() > i; i++) {
            vector<int>& left = ans.back();
            vector<int>& curr = ii[i];
            if (left[1] >= curr[0])
                left[1] = max(left[1], curr[1]);
            else
                ans.push_back(curr);
        }
        return ans;
    }
};