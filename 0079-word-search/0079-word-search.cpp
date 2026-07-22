class Solution {
public:
    bool dfs(int i, int j, int idx, vector<vector<char>>& mat, string& word) {
        int m = mat.size();
        int n = mat[0].size();

        if (i < 0 || i >= m || j < 0 || j >= n)
            return false;

        if (mat[i][j] != word[idx])
            return false;

        if (idx == word.size() - 1)
            return true;

        char temp = mat[i][j];
        mat[i][j] = '#'; // to marks as visted type thing
        bool found = dfs(i + 1, j, idx + 1, mat, word) ||
                     dfs(i - 1, j, idx + 1, mat, word) ||
                     dfs(i, j + 1, idx + 1, mat, word) ||
                     dfs(i, j - 1, idx + 1, mat, word);

        mat[i][j] = temp; // storing the og char

        return found;
    }

    bool exist(vector<vector<char>>& mat, string word) {

        int m = mat.size();
        int n = mat[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == word[0])
                    if (dfs(i, j, 0, mat, word))
                        return true;
            }
        }
        return false;
    }
};