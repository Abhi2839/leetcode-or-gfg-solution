class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        int l = 0;
        int cnt = 0;
        for (int i = 0; n > i; i++) {
            if (nums[i] == 0)
                cnt++;
            while (cnt > k) {
                if (nums[l] == 0)
                    cnt--;
                l++;
            }
            ans = max(ans, i + 1 - l);
        }
        return ans;
    }
};