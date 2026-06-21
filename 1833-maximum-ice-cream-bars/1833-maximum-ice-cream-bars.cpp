class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        // least cost icecream will result in max number of icecream bar
        int cnt = 0;
        for (auto x : costs) {
             if (coins < x)
                break;
            coins -= x;
                cnt++;
        }
        return cnt;
    }
};