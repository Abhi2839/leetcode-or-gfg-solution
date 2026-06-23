class Solution {
public:
    string conver(string a) {
        int b = stoi(a);
        string st = "";
        while (b > 0) {
            st += (b & 1) ? '1' : '0';
            b >>= 1;
        }
        reverse(st.begin(), st.end());
        return st;
    }
    string convertDateToBinary(string date) {
        string ans = "";
        string year = date.substr(0, 5);
        string month = date.substr(5, 2);
        string day = date.substr(8, 2);
        return conver(year) + "-" + conver(month) + "-" + conver(day);
    }
};