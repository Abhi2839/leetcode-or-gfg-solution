class Solution {
public:
    int countLargestGroup(int n) {
        int ans = 0, cnt = 0;
        unordered_map<int, int> mp;
        for (int i = 1; n >= i; i++) {
            int sum = 0;
            int num = i;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            mp[sum]++;

            ans = max(ans, mp[sum]);
        }

        for (auto it : mp)
            if (it.second == ans)
                cnt++;

        return cnt;
    }
};