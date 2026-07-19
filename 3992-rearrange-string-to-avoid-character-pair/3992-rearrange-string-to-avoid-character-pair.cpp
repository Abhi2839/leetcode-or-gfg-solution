class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string ans = "";
        for (auto z : s)
            if (z == y)
                ans += z;
        for (auto z : s)
            if (z != y and z != x)
                ans += z;
        for (auto z : s)
            if (z == x)
                ans += z;
        return ans;
    }
};