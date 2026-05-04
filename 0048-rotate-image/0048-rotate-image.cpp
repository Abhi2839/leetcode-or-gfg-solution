class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int m = mat.size();
        for (int i = 0; m > i; i++) {
            for (int j = i + 1; m > j; j++) {

                swap(mat[i][j], mat[j][i]);
            }
        }
        for (int i = 0; m > i; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
};