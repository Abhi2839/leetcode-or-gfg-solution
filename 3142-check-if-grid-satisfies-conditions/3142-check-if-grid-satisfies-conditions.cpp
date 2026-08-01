class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; m > i; i++) {
            for (int j = 0; n > j; j++) {
                if (m > i + 1 and grid[i][j] != grid[i + 1][j])
                    return 0;
                if (n > j + 1 and grid[i][j] == grid[i][j + 1])
                    return 0;
            }
        }
        return 1;
    }
};