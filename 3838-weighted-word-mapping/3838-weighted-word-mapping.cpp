class Solution {
public:
    string mapWordWeights(vector<string>& arr, vector<int>& wgt) {
        string s = "";

        char ch[26];
        for (int i = 0; 26 > i; i++)
            ch[i] = 'z' - i;
        for (auto x : arr) {
            int sum = 0;
            for (int i = 0; x.length() > i; i++) {
                sum += wgt[-'a' + x[i]];
            }
            sum %= 26;
            s += ch[sum];
        }
        return s;
    }
};