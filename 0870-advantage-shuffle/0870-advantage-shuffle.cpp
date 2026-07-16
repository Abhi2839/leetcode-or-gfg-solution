class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();

        sort(nums1.begin(), nums1.end());

        vector<pair<int, int>> v; // for n2
        for (int i = 0; i < n; i++)
            v.push_back({nums2[i], i});

        sort(v.begin(), v.end());

        vector<int> ans(n);

        int l = 0;
        int r = n - 1;
        for (auto x : v)
            cout << x.first << " " << x.second << endl;
        for (int x : nums1) {
            if (x > v[l].first) {
                ans[v[l].second] = x;
                l++;
            } else {
                ans[v[r].second] = x;
                r--;
            }
        }

        return ans;
    }
};