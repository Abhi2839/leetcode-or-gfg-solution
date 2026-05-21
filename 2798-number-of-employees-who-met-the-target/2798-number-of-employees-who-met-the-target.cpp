class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& arr, int tgt) {
        int cnt = 0;
        for (auto x : arr) {
            if (x >= tgt)
                cnt++;
        }
        return cnt;
    }
};