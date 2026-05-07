class Solution {
public:
    bool coprime(int a, int b) {
        if (1 > a or 1 > b)
            return 0;
        for (int i = 2; min(a, b) >= i; i++) {
            if (a % i == 0 and b % i == 0)
                return 0;
        }
        return 1;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for (int i = 0; n > i; i++) {
            for (int j = i + 1; n > j; j++) {
                string a = to_string(nums[i]);
                int n1 = a[0] - '0';
                string b = to_string(nums[j]);
                int n2 = b[b.size() - 1] - '0';

                if (coprime(n1, n2))
                    cnt++;
            }
        }
        return cnt;
    }
};