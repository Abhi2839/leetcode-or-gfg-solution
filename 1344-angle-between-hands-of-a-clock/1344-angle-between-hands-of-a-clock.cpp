class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ans = abs((hour % 12) * 30 - (minutes % 60) * 5.5);
        return min(ans, 360 - ans);
    }
};