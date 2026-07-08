class Solution {
public:
    int minimumOperationsToMakeEqual(int x, int y) {
        if (y >= x)
            return y - x;

        queue<pair<int, int>> qu;
        qu.push({x, 0});       // num step
        unordered_set<int> st; // to keep track of vis element;

        while (!qu.empty()) {
            auto [val, step] = qu.front();
            qu.pop();
            if (st.find(val) != st.end())
                continue;
            st.insert(val);
            if (val == y)
                return step;

            if (val % 5 == 0)
                qu.push({val / 5, step + 1});
            if (val % 11 == 0)
                qu.push({val / 11, step + 1});
            qu.push({val + 1, step + 1});
            if (val >= 1)
                qu.push({val - 1, step + 1});
        }
        return -1;
    }
};