class Solution {
public:
    unordered_map<int, int> mp;
    void func(vector<int>& arr) {
        unordered_set<int> st(arr.begin(), arr.end());
        for (auto x : st)
            mp[x]++;
    }
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {

        vector<int> ans;
        func(nums1);
        func(nums2);
        func(nums3);
        for (auto& [x, y] : mp)
            if (y >= 2)
                ans.push_back(x);
        return ans;
    }
};