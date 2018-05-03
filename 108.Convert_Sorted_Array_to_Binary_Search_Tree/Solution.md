/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return formBST(nums, 0, nums.size()-1);
    }
    
    TreeNode* formBST(vector<int>& nums, int begin, int end) {
        if (begin > end) return nullptr;
        int mid = (begin + end)/2;
        
        TreeNode* root = new TreeNode(nums[mid]);
        if(begin == end) return root;
        
        root->left = formBST(nums,begin, mid-1);
        root->right = formBST(nums, mid+1, end);
        
        return root;
    }
};