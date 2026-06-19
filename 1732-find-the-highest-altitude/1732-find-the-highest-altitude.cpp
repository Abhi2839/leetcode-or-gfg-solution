class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> ans(n + 1);
        ans[0] = 0;

        for (int i = 0; n > i; i++) {
            ans[i + 1] = ans[i] + gain[i];
        }
        int a = 0; // ans
        for (auto x : ans) {
            if (x > a)
                a = x;
        }
        return a;
    }
};