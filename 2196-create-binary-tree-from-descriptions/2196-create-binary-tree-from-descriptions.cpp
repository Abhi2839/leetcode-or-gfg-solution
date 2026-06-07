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
    // create a hashamp then update the val acc to the consiton
    TreeNode* createBinaryTree(vector<vector<int>>& arr) {
        unordered_map<int, TreeNode*> mp;
        unordered_set<int> rt;
        for (auto it : arr) {
            int p = it[0];
            int c = it[1];
            int n = it[2];
            if (mp.find(p) == mp.end())
                mp[p] = new TreeNode(p);
            if (mp.find(c) == mp.end())
                mp[c] = new TreeNode(c);
            if (n == 1)
                mp[p]->left = mp[c];
            else
                mp[p]->right = mp[c];

            rt.insert(c);
        }
        for (auto& it : mp) {
            if (rt.find(it.first) == rt.end())
                return it.second;
        }
        return nullptr;
    }
};