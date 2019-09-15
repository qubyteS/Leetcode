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
    
    void levelUtil(TreeNode*root,int level,vector<int>&path, vector<vector<int>>&res, bool dir) {
        if(!root) return;
        
        if(level == 1) {
            path.pb(root->val);
            return;
        }
        
        if(level>1) {
            if(dir) {
                levelUtil(root->left,level-1,path,res,dir);
                levelUtil(root->right,level-1,path,res,dir);
            }else {
                levelUtil(root->right,level-1,path,res,dir);
                levelUtil(root->left,level-1,path,res,dir);
            }  
        }
    }
    
    int height(TreeNode* root) {
        if(!root) return 0;
        return 1+max(height(root->left), height(root->right));
    }
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int h = height(root);
        vector<vector<int>>res;
        
        bool ltr = true;
        
        if(!root) return res;
        
        for(int i=1;i<=h;i++) {
            vector<int>path;
            levelUtil(root,i,path,res,ltr);
            res.pb(path);
            ltr = !ltr;
        }
        
        return res;
    }
};