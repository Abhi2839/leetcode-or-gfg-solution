class Solution {
public:
    int countSubarrays(vector<int>& nums, int k) {
        // sort(nums.begin(), nums.end());
        int cnt = 0, idx, n = nums.size(), ans = 0;

        for (int i = 0; n > i; i++) {
            if (nums[i] == k) {
                idx = i;
                break;
            }
        }

        unordered_map<int, int> mp;
        mp[0] = 1;
        // left side of median element
        for (int i = idx - 1; i >= 0; i--) {
            if (nums[i] < k)
                cnt--;
            else if (nums[i] > k)
                cnt++;

            mp[cnt]++;
        }
        cnt = 0;

        // right side

        for (int i = idx; n > i; i++) {
            if (nums[i] < k)
                cnt--;
            else if (nums[i] > k)
                cnt++;

            ans += mp[-cnt];
            ans += mp[1 - cnt];
        }
        return ans;
    }
};