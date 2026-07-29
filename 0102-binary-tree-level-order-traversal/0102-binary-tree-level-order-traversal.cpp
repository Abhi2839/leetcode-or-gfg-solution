/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if (root==nullptr) return ans;
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()){
            int size=qu.size();
            vector<int>level;
            for (int i=0;size>i;i++){
                auto x=qu.front();qu.pop();
                level.push_back(x->val);
                if (x->left) qu.push(x->left);
                if (x->right) qu.push(x->right);
            }
            ans.push_back(level);
        }
return ans;
    }
};