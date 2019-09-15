/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/**

SPACE OPTIMIZED APPROACH

*/
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // if not root
        if(!root) return NULL;
        
        // if root is same as p or q
        if(root == p || root == q) {
            return root;
        }
        
        TreeNode* left = lowestCommonAncestor(root->left,p, q);
        TreeNode* right = lowestCommonAncestor(root->right,p ,q);
        
        // if both left and right return a value, means root is the LCA
        if(left!=NULL && right!=NULL) return root;
        
        // if both side returns a NULL value
        if(!left && !right) return NULL;
        
        // if one side is null
        return right!=NULL?right:left;
    }
};