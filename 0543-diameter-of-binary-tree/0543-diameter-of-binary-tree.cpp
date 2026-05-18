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
    // height
    // diameter
    int ans = 0;
    int height(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        ans = max(lh + rh, ans);
        return max(lh, rh) + 1;
    }

    int diameter(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int l = height(root->left);
        int r = height(root->right);
        ans = max(l + r, ans);
        return max(l, r) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
        // return diameter(root);
    }
};