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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(!root) return v;
        stack<TreeNode*> nodeStack;
        while(root || !nodeStack.empty()){
            while(root){
                nodeStack.push(root);
                root = root->left;
            }
            root = nodeStack.top();
            nodeStack.pop();
            v.push_back(root->val);
            root = root->right;
        }
        return v;
    }
};