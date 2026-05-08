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
    void inorder(TreeNode* root, vector<int>& ans) {
        if (root == nullptr)
            return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        // inorder traversal
        vector<int> arr;
        inorder(root, arr);
        int n = arr.size() - 1;
        int i = 0;
        while (n > i) {
            if (arr[i] + arr[n] == k)
                return 1;
            else if (arr[i] + arr[n] > k)
                n--;
            else
                i++;
        }
        return 0;
    }
};