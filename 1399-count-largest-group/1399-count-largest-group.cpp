class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> mp; // sum, freq
        int ans = 0;
        
        for (int i = 1; i <= n; i++) {
            int num = i;
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            
            mp[sum]++;
            ans = max(ans, mp[sum]);
        }
        
        int cnt = 0;
    
        for (auto x : mp) {
            if (x.second == ans)
                cnt++;
        }
        
        return cnt;
    }
};
