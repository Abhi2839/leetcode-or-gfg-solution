/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // if(root==nullptr) return root;
        if (root == p or root == q or root == nullptr)
            return root;
        TreeNode* le = lowestCommonAncestor(root->left, p, q);
        TreeNode* ri = lowestCommonAncestor(root->right, p, q);
        if (le && ri)
            return root;
        return le ? le : ri;
    }
};