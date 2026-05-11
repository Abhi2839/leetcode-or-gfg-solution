class Solution {
public:
    vector<double> internalAngles(vector<int>& s) {
        // basic condition to check wether given sidde will is form triangle or
        // not if yes then apply cos formula
        double a = s[0];
        double b = s[1];
        double c = s[2];
        if (a >= b + c or b >= c + a or c >= a + b)
            return {};

        double x = acos((b * b + c * c - a * a) / (2 * b * c));
        double y = acos((a * a + c * c - b * b) / (2 * c * a));
        double z = acos((b * b + a * a - c * c) / (2 * b * a));
        vector<double> ans;
        double PI = acos(-1);
        ans.push_back(x * 180.0 / PI);
        ans.push_back(y * 180.0 / PI);
        ans.push_back(z * 180.0 / PI);
        sort(ans.begin(), ans.end());
        return ans;
    }
};