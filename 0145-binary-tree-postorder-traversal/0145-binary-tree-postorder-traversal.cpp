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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>ans;
        TreeNode*curr=root;
        TreeNode*lastpr=nullptr;
        while(curr or st.size()){
            if (curr){
                st.push(curr);
                curr=curr->left;
            }
            else{
                curr=st.top();
                while(curr and(curr->right==nullptr or curr->right==lastpr)){
                    ans.push_back(curr->val);
                    lastpr=curr;
                    st.pop();
                    if (st.size()>0) curr=st.top();
                    else curr=nullptr;
                }
                if (curr) curr=curr->right;
            }
        }
        return ans;
    }
};