class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> st;
        // converting num to string
        for (auto x : nums)
            st.push_back(to_string(x));
        // storing the result
        string ans = "";
        sort(st.begin(), st.end(),
             [](string a, string b) { return a + b > b + a; });
        if (st[0] == "0")
            return "0";

        for (auto x : st)
            ans += x;
        return ans;
    }
};