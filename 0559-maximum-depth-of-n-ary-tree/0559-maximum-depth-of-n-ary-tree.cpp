/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
int height(Node*root){
    if (root==nullptr) return 0;
    int h=0;
    for (Node*x:root->children) h=max(h,height(x));
    return h+1;
}
    int maxDepth(Node* root) {
        return height(root);
    }
};