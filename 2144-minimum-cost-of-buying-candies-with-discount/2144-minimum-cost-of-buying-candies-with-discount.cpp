class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int costs = 0;
        for (int i = cost.size() - 1; i >= 0; i -= 3) {
            costs += cost[i];
            if (i - 1 >= 0)
                costs += cost[i - 1];
        }
        return costs;
    }
};