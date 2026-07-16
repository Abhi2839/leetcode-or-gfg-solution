class Solution {
public:
    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n);
        int ele = -1;
        for (int i = 0; n > i; i++) {
            ele = max(ele, nums[i]);
            pref[i] = gcd(ele, nums[i]);
        }
        long long sum = 0;
        int i = 0, j = n - 1;
        sort(pref.begin(), pref.end());
        while (j > i) {
            sum += gcd(pref[i], pref[j]);
            j--;
            i++;
        }
        return sum;
    }
};