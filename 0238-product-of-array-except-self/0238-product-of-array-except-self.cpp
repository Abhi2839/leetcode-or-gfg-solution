class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long prod = 1;
        int n = nums.size();
        vector<int> ans(n, 0);
        int cnt = 0, idx = -1;
        for (int i = 0; n > i; i++) {
            int x = nums[i];
            if (x == 0) {
                cnt++;
                if (cnt == 1)
                    idx = i;
                if (cnt > 1)
                    return ans;
            } else
                prod *= x;
        }
        if (cnt == 1)
            ans[idx] = prod;
        else if (cnt == 0) {
            for (int i = 0; n > i; i++) {
                ans[i] = prod / nums[i];
            }
        }
        return ans;
    }
};