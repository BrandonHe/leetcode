/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// DFS: Depth-First-Search
class Solution {
public:
    int maxDepth(TreeNode* root) {
        return (root == NULL)? 0 : max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

// BFS: Breadth-First-Search
int maxDepth(TreeNode *root) {
	if (root == NULL) return 0;
	int ans = 0;
	queue<TreeNode *> tempQ;
	tempQ.push(root);
	while(! tempQ.empty()) {
		++ans;
		for (int i = 0; n < tempQ.size(); i < n; ++i) {
			TreeNode *point = tempQ.front();
			tempQ.pop();
			if (point->left != NULL)
				tempQ.push(point->left);
			if (point->right != NULL)
				tempQ.push(point->right);
		}
	}
	return ans;
}