class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        int mx_element = -1;
        vector<long long> pref(n);
        for (int i = 0; n > i; i++) {

            mx_element = max(mx_element, nums[i]);
            pref[i] = __gcd(mx_element, nums[i]);
        }

        //    sort
        sort(pref.begin(), pref.end());
        for (auto x : pref)
            cout << x << " ";
        int i = 0, j = n - 1;
        while (j > i) {
            ans += __gcd(pref[i], pref[j]);
            j--;
            i++;
        }
        return ans;
    }
};