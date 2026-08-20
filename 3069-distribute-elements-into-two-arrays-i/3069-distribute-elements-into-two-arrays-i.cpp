class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v, v1, ans;
        v.push_back(nums[0]);
        v1.push_back(nums[1]);
        for (int i = 2; n > i; i++) {
            if (v.back() > v1.back())
                v.push_back(nums[i]);
            else
                v1.push_back(nums[i]);
        }
        for (auto x : v)
            ans.push_back(x);
        for (auto x : v1)
            ans.push_back(x);
        return ans;
    }
};