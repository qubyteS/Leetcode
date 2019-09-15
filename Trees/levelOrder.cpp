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
    
    void levelUtil(TreeNode*root,int level,vector<int>&path, vector<vector<int>>&res) {
        if(!root) return;
        
        if(level == 1) {
            path.pb(root->val);
            return;
        }
        
        if(level>1) {
            levelUtil(root->left,level-1,path,res);
            levelUtil(root->right,level-1,path,res);
        }
    }
    
    int height(TreeNode* root) {
        if(!root) return 0;
        return 1+max(height(root->left), height(root->right));
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        int h = height(root);
        vector<vector<int>>res;
        vector<int>path;
        
        if(!root) return res;
        
        for(int i=1;i<=h;i++) {
            vector<int>path;
            levelUtil(root,i,path,res);
            res.pb(path);
        }
        
        return res;
    }
};