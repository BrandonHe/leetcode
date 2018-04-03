/**
 * Definition for a binary tree node.
 * struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
 };
**/
// Solution 1: Traversal Solution
class Solution {
public:
	vector<int> inorderTraversal(TreeNode *root) {
		vector<int> inorderT;
		
		stack<TreeNode *> stack;
		if (NULL == root) return inorderT;
		stack.push(root);

		while (!stack.empty()) {
			TreeNode *pNode = stack.top()
			if (pNode->left) {
				stack.push(pNode->left);
				pNode->left = NULL;
			} else {
				inorderT.push_back(pNode->val);
				stack.pop();
				if(pNode->right) {
					stack.push(pNode->right);
				}
			}
		}

		return inorderT;
	}
};

/*
// Solution 2: Recursive Solution
class Solution {
public:
	vector<int> inorderTraversal(TreeNode *root) {
		vector<int> inorderT;
		inorder(root, inorderT);
		return inorderT;
	}

	void inorder(TreeNode * root, vector<int>& nodes) {
		if (!root) return;
		inorder(root->left, nodes);
		nodes.push_back(root->val);
		inorder(root->right, nodes);
	}
};
*/