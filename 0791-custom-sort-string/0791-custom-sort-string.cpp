class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> st;
        for (auto x : s)
            st[x]++;
        ;
        string ans = "";
        for (auto x : order) {
            if (st.find(x) != st.end()) {
                for (int i = 0; st[x] > i; i++)
                    ans += x;
                st.erase(x);
            }
        }
        for (auto x : st) {
            for (int i = 0; x.second > i; i++)
                ans += x.first;
        }
        return ans;
    }
};