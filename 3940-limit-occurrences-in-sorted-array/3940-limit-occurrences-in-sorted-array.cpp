class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;
        vector<int> freq(101, 0);
        for (auto x : nums) {
            freq[x]++;
            if (freq[x] <= k)
                ans.push_back(x);
        }
        return ans;
    }
};