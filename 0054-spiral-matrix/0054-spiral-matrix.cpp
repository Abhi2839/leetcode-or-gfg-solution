class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        // traverse the top right bottom left
vector<int>ans;
        int top = 0, left = 0, bottom = n - 1, right = m - 1;

        while (bottom >= top and right >= left) {
            // left to right
            for (int i = left; right >= i; i++) {
                ans.push_back(mat[top][i]);
            }
            top++;

            // top to bottom
            for (int i = top; bottom >= i; i++) {
                ans.push_back(mat[i][right]);
            }
            right--;

            // right to left
            if (bottom >= top) {
                for (int i=right;left<=i;i--){
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            // bottom to top
            if(right>=left){
                for (int i=bottom;i>=top;i--){
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};