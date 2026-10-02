class Solution {
public:
    int xorOperation(int n, int s) {
        int ans = 0;
        while (n--) {
            ans ^= s;
            s += 2;
        }
        return ans;
    }
};