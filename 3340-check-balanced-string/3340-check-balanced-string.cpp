class Solution {
public:
    bool isBalanced(string num) {
        int sum = 0;
        for (int i = 0; num.length() > i; i++) {
            sum += (i % 2 == 0 ? num[i] - '0' : -(num[i] - '0'));
        }
        return sum == 0;
    }
};