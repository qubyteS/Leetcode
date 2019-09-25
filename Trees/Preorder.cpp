/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#define pb push_back
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(!root) return {};
        
        stack<TreeNode*>st;
        vector<int>res;
        st.push(root);
        while(!st.empty()) {
            TreeNode* node = st.top();
            res.pb(node->val);
            st.pop();
            
            if(node->right) {
                st.push(node->right);
            }
            if(node->left){
                st.push(node->left);
            }
        }
        
        return res;
    }
};
