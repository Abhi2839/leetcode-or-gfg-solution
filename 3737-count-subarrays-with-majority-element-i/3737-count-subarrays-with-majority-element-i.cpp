class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans = 0;
        for (int i = 0; nums.size() > i; i++) {
            int cnt = 0;
            for (int j = i; nums.size() > j; j++) {
                if (nums[j] == target) {
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

// rem 0 to k-1
// sum of sub %k  hashmap
