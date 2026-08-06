class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        for (auto x : nums)
            ans.push_back(to_string(x));

        sort(ans.begin(), ans.end(),
             [&](const string& a, const string& b) { return a + b > b + a; });
        string s = "";
        for (auto x : ans)
            s += x;
            if (s[0]=='0') return "0";
        return s;
    }
};