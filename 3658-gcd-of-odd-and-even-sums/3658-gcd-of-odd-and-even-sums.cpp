class Solution {
public:
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}
    int gcdOfOddEvenSums(int n) {
        int oddsum=n*n;
        int evensum=n*(n+1);
return gcd(oddsum,evensum);
    }
};