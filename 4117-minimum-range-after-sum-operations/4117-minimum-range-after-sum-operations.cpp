class Solution {
public:
    int minRange(int a, int b, int c) {
        int min1 = max({a, b, c}) - min({a, b, c});
        int d = a + b;
        int min2 = max({a, b, d}) - min({a, b, d});
        int e = a + c;
        int min3 = max({e, a, c}) - min({e, a, c});
        int f = b + c;
        int min4 = max({f, b, c}) - min({f, b, c});
        return min({min1, min2, min3, min4});
    }
};