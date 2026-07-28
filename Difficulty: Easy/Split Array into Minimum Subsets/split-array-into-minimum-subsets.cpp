class Solution {
public:
    int minSubsets(vector<int>& arr) {
        unordered_set<int> st(arr.begin(), arr.end());
        int cnt = 0;

        for (auto x : arr) {
            if (!st.count(x)) continue;     

            if (st.count(x - 1)) continue;   

            int curr = x;
            while (st.count(curr)) {
                st.erase(curr);
                curr++;
            }
            cnt++;
        }

        return cnt;
    }
};