class Solution {
public:
    int ss(int a) {
        int sum = 0;
        while (a > 0) {
            sum += a % 10;
            a /= 10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum = 0, s = 0;
        for (auto x : nums) {
            sum += x;
            s += ss(x);
        }
        return abs(sum - s);
    }
};