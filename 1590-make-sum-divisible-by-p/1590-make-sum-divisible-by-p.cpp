class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        //  appraoch total sum // curr sum  // x subt rneeded_sumt %p        // mp[x]=i

        unordered_map<int, int> mp;
        mp[0] = -1; // base case
        int len = nums.size();
        long long total_sum = 0, curr_sum = 0, needed_sum = 0;
        for (auto x : nums)
            total_sum += x;
        int rem = total_sum % p;
        if (rem == 0) // bcoz we can'nt rm complete arr
            return 0;
        for (int i = 0; nums.size() > i; i++) {
            curr_sum = (curr_sum + nums[i]) % p;
            needed_sum = (curr_sum - rem + p) % p;

            if (mp.count(needed_sum)) {
                len = min(len, i - mp[needed_sum]);
            }

            mp[curr_sum] = i;
        }
      return len == nums.size() ? -1 : len;
    }
};