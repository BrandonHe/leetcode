# Definition for a binary tree node.
# class TreeNode(object):
#	def __init__(self):
# 		self.val = x
#		self.left = None
#		self.right = None
def maxDepth(self, root):
	return max(self.maxDepth(root.left), self.maxDepth(root.right)) + 1 if root else 0