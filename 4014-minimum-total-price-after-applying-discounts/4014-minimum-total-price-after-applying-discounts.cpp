class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        int n = prices.size();
        int m = discounts.size();

        int size = min(n, m);
        double ans = 0;
        for (int i = 0; i < size; i++) {
            double x = prices[i] * (100.0 - discounts[i]) / 100.0;
            ans += x;
        }

        for (int i = size; i < n; i++) {
            ans += prices[i];
        }

        return ans;
    }
};