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
    int val, cnt = 0, maxcnt = 0;
    void inorder(TreeNode* root) {
        if (!root)
            return;
        inorder(root->left);
            if (val == root->val)
                cnt++;
            else
                cnt = 1;

        if (cnt > maxcnt) {
            maxcnt=cnt;
            ans.clear();
            ans.push_back(root->val);
        } else if (cnt == maxcnt)
            ans.push_back(root->val);

        val = root->val;
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return ans;
    }
};