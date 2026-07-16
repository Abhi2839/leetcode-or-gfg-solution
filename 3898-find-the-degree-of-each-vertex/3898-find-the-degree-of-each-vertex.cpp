class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<int> ans(n);
        for (int i = 0; n > i; i++) {
            int indegree = 0;
            for (int j = 0; n > j; j++) {
                if (mat[i][j] == 1)
                    indegree++;
            }
            ans[i] = indegree;
        }
        return ans;
    }
};