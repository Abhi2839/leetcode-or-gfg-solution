class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        vector<int> arr;
        for (int i = 0; nums.size() > i; i += 2) {
            string s = to_string(nums[i]) + to_string(nums[i + 1]);
            arr.push_back(stoi(s));
        }
        int ans = INT_MAX;
        for (auto x : arr)
            ans = min(ans, x);
        return ans;
    }
};