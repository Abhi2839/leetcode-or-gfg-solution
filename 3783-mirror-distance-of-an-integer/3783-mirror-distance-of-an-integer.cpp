class Solution {
public:
    int mirrorDistance(int n) {
        string x = to_string(n);
        reverse(x.begin(), x.end());
        return abs(n - stoi(x));
    }
};