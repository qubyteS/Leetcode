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
    bool solve(TreeNode* l,TreeNode* r){
        if(l==NULL && r==NULL)  return true;
        if(l==NULL || r==NULL)  return false;
        if(l->val != r->val)    return false;
        return solve(l->left,r->right)&&solve(l->right,r->left);
        
    }
    
    bool isSymmetric(TreeNode* t) {
        if(t==NULL) return true;
        if(!t->left && !t->right)   return true;
        if(!t->left || !t->right)   return false;
        return solve(t->left,t->right);
    }
};