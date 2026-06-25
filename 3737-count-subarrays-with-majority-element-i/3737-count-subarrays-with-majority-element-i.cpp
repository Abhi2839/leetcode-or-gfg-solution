class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int tgt) {
        int ans = 0;
        for (int i = 0; nums.size() > i; i++) {
            int cnt = 0;
            for (int j = i; nums.size() > j; j++) {
                if (nums[j] == tgt) {
                    cnt++;
                }

                int len = j + 1 - i;
                if (2 * cnt > len)
                    ans++;
            }
        }
        return ans;
    }
};