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
    int cnt = 0;

    pair<int, int> calc(TreeNode* root) {
        if (root == nullptr) {
            return {0, 0};
        }

        auto l = calc(root->left);
        auto r = calc(root->right);

        int curr_sum = l.first + r.first + root->val;
        int curr_cnt = l.second + r.second + 1;

        if (curr_sum / curr_cnt == root->val) {
            cnt++;
        }

        return {curr_sum, curr_cnt};
    }

    int averageOfSubtree(TreeNode* root) {
        cnt = 0;
        calc(root);
        return cnt;
    }
};