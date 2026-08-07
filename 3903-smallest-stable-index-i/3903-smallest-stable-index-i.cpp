class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pref(n);
        pref[0] = nums[0];
        for (int i = 1; n > i; i++) {
            pref[i] = max(pref[i - 1], nums[i]);
        }
        vector<int> suff(n);
        suff[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suff[i] = min(nums[i], suff[i + 1]);
        }
        for (int i = 0; n > i; i++) {
            cout << "pref " << pref[i] << " " << "Suff " << suff[i] << endl;
        }
        for (int i = 0; n > i; i++) {
            if ((pref[i] - suff[i]) <= k)
                return i;
        }
        return -1;
    }
};