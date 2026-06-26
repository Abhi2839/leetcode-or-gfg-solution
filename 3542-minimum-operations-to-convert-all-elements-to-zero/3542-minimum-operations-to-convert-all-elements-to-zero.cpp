class Solution {
public:
    int minOperations(vector<int>& nums) {
        stack<int> st;
        int cnt = 0;
        for (auto x : nums) {
            while (!st.empty() and st.top() > x) {
                st.pop();
            }
            if ((st.empty() or st.top() < x) and x > 0) {
                st.push(x);
                cnt++;
            }
        }
        return cnt;
    }
};