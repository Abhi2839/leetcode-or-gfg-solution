class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int freq[110] = {0};
        vector<int> ans;
        for (auto x : nums) {
            freq[x]++;
            if (freq[x] == 2)
                ans.push_back(x);
        }
        return ans;
    }
};