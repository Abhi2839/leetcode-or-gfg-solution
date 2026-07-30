/*
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	vector<int> serialize(Node *root) {
		//  code here
		vector<int>ans;
		if (root == nullptr) {
			ans.push_back(-1);
			return ans;
		}
		// 		int i=0;
		queue<Node*>qu;
		qu.push(root);
		while (!qu.empty()) {
			Node*curr = qu.front();
			qu.pop();
			if (curr == nullptr) {ans.push_back(-1); continue; }
			ans.push_back(curr->data);
			qu.push(curr->left);
			qu.push(curr->right);
		}
		return ans;
	}
	
	Node *deSerialize(vector<int> &arr) {
		if (arr[0] == -1) // means nullptr
			return nullptr;
		int i = 1;
		Node*root = new Node(arr[0]);
		queue<Node*>qu;
		qu.push(root);
		while (!qu.empty()) {
			Node*curr = qu.front();
			qu.pop();
			if (arr[i] != -1) {
				Node*left = new Node(arr[i]);
				curr->left = left;
				qu.push(left);
			}
			i++;
			if (arr[i] != -1) {
				Node*right = new Node(arr[i]);
				curr->right = right;
				qu.push(right);
			}
			i++;
		}
		return root;
	}
};
