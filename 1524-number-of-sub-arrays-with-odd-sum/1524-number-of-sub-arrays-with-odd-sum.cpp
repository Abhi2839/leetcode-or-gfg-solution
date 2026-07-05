class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int mod = 1e9 + 7;
        int n = arr.size();
        for (int i = 0; n > i; i++)
            arr[i] = arr[i] % 2;
        int sum = 0, even = 1, odd = 0, ans = 0;
        for (int i = 0; n > i; i++) {
            sum += arr[i];
            if (sum % 2 == 0) {
                ans += odd;
                even++;

            } else {
                ans += even;
                odd++;
            }
            ans %= mod;
        }
        return ans;
    }
};
