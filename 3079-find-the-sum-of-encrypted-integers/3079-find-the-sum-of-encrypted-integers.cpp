class Solution {
public:
    int f(int a) {
        int cnt = 0, num = 0;
        while (a > 0) {
            cnt++;
            num = max(num, a % 10);
            a /= 10;
        }
        string ans = "";
        for (int i = 0; cnt > i; i++) {
            ans += to_string(num);
        }
        return stoi(ans);
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (auto x : nums) {
            sum += f(x);
        }
        return sum;
    }
};