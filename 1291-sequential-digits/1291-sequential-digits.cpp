class Solution {
public:
    // bool check(int n) {
    //     string s = to_string(n);
    //     for (int i = 1; s.length() > i; i++) {
    //         int a = s[i] - '0';
    //         int b = s[i - 1] - '0';
    //         if (a - b != 1)
    //             return false;
    //     }
    //     return true;
    // }
    // tle
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        string l=to_string(low);
        string h=to_string(high);
        vector<int> ans;
        for (int i = l.size(); h.size() >= i; i++){
            for (int j=0;9-i>=j;j++){
            string as=s.substr(j,i);
                int num=stoi(as);
                if (num>=low and high>=num) ans.push_back(num);
            }
        }
        return ans;
    }
};