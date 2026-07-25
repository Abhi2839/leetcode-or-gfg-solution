class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.begin(), nums1.end());
        for (auto x : nums2)
            ans.push_back(x);
        sort(ans.begin(), ans.end());

        if (ans.size() % 2 == 1)
            return ans[ans.size() / 2];

        return (ans[ans.size() / 2] + ans[ans.size() / 2 - 1]) / 2.00000;
    }
};