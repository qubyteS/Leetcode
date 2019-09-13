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
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        int subSum = sum - root->val;
        if(subSum == 0 && root->left == NULL && root->right == NULL) {
            return true;
        }
        
        bool left = hasPathSum(root->left,subSum);
        bool right = hasPathSum(root->right,subSum);
        
        return (left || right);
    }
};