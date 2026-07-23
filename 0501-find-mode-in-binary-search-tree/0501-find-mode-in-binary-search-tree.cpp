/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    int prev_val, cnt = 0, maxi = 0;

    void solve(TreeNode* root) {
        if (!root)
            return;
        solve(root->left);
        if (prev_val == root->val)
            cnt++;
        else
            cnt = 1;

        if (cnt > maxi) {
            maxi = cnt;
            ans.clear();
            ans.push_back(root->val);
        } else if (cnt == maxi)
            ans.push_back(root->val);

        prev_val = root->val;
        solve(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        solve(root);
        return ans;
    }
};