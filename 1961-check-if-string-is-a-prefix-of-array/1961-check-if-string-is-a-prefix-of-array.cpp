class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string co = "";

        for (string& w : words) {
            co += w;
            if (co == s)
                return true;
            if (co.size() > s.size())
                return false;
        }

        return false;
    }
};