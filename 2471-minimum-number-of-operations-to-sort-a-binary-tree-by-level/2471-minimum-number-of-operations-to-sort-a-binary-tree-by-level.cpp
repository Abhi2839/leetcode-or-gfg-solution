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
    int swaps(vector<int> arr) {
        vector<int> temp(arr.begin(), arr.end());
        sort(arr.begin(), arr.end());
        unordered_map<int, int> mp;
        for (int i = 0; arr.size() > i; i++)
            mp[arr[i]] = i;
        int cnt = 0;
        for (int i = 0; arr.size() > i; i++) {
            if (temp[i] != arr[i]) {
                int idx = mp[temp[i]];
                swap(arr[i], arr[idx]);
                mp[arr[i]] = i;
                mp[arr[idx]] = idx;
                cnt++;
            }
        }
        return cnt;
    }
    int minimumOperations(TreeNode* root) {
        int ops = 0;
        if (root == nullptr)
            return 0;
        queue<TreeNode*> qu;
        qu.push(root);
        while (!qu.empty()) {
            int size = qu.size();
            vector<int> level;
            for (int i = 0; size > i; i++) {
                auto x = qu.front();
                qu.pop();
                level.push_back(x->val);
                if (x->left)
                    qu.push(x->left);
                if (x->right)
                    qu.push(x->right);
            }
            ops += swaps(level);
        }
        return ops;
    }
};