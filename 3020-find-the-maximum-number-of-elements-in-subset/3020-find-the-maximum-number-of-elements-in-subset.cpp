class Solution {
public:
    int maximumLength(vector<int>& nums) {

        unordered_map<long long, int> mp;

        for (auto x : nums)
            mp[x]++;

        int ans = 1;

        for (auto& [x, frq] : mp) {

            if (x == 1) {
                ans = max(ans,frq % 2 ? frq : frq - 1);
                continue;
            }

            long long curr = x;
            int length = 0;

            while (mp.count(curr) && mp[curr] >= 2) {
                length += 2;

                if (curr > 1e9)   // to prevent overflow
                    break;

                curr *= curr;
            }

            if (mp.count(curr))
                length++;
            else
                length--;

            ans = max(ans, length);
        }

        return ans;
    }
};