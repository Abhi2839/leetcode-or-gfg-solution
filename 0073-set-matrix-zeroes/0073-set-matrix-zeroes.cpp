class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> zr(row, 0);
        vector<int> zc(col, 0);
        for (int i = 0; row > i; i++) {
            for (int j = 0; col > j; j++) {
                if (matrix[i][j] == 0) {
                    zr[i] = -1;
                    zc[j] = -1;
                }
            }
        }
        for (int i = 0; row > i; i++) {
            for (int j = 0; col > j; j++) {
                if (zr[i] == -1 or zc[j] == -1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};