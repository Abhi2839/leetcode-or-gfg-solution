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
    vector<vector<int>> pathSum(TreeNode* root, int ts) {
        vector<vector<int>> ans;
        vector<int> path;
        dfs(root, ts, 0, ans, path);
        return ans;
    }
    void dfs(TreeNode* root, int ts, int cs, vector<vector<int>>& ans,
             vector<int>& path) {
        if (root == nullptr)
            return;
        cs += root->val;
        path.push_back(root->val);
        if (root->left == nullptr and root->right == nullptr and cs == ts)
            ans.push_back(path);

        dfs(root->left, ts, cs, ans, path);
        dfs(root->right, ts, cs, ans, path);
        path.pop_back();
    }
};