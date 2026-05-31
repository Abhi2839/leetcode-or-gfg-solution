class Solution {
public:
    int digitFrequencyScore(int n) {
        int freq[10];
        for (int i = 0; 10 > i; i++) {
            freq[i] = 0;
        }
        while (n > 0) {
            freq[n % 10]++;
            n /= 10;
        }
        int sum = 0;
        for (int i = 0; 10 > i; i++) {
            sum += freq[i] * i;
        }
        return sum;
    }
};