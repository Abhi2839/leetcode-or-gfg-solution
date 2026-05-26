class Solution {
public:
    string greatestLetter(string s) {

        vector<int> sm(26, 0);
        vector<int> cap(26, 0);

        for (auto x : s) {
            if (x >= 'a' and 'z' >= x)
                sm[x - 'a'] = 1;
            else
                cap[x - 'A'] = 1;
        }
        string ans = "";
        for (int i = 0; 26 > i; i++) {
            if (sm[i] and cap[i])
                ans = i + 'A';
        }
        return ans;
    }
};