/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *		int val;
 *		TreeNode  left;
 *		TreeNode right;
 *		TreeNode(int x) {val = x;}
 * }
 */
class Solution{
	public TreeNode invertTree(TreeNode root) {
		if (root) {
			TreeNode left = invertTree(root->right);
			TreeNode right = invertTree(root->left);

			root.left = right;
			root.right = left;
		}

		return root;
	}
}