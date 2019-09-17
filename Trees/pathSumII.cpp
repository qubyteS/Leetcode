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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        // This is a typical example of backtracking based question
        
        if(!root) return {};
        vector<vector<int>>res;
        vector<int>path;
        
        generate(root,sum,res,path);
        return res;
    }
    
    void generate(TreeNode* root, int sum, vector<vector<int>>&res,vector<int>&path) {
        if(!root) return;
        
        path.pb(root->val);
        int subSum = sum-root->val;
        
        //if(subSum<0) return;
        if((subSum == 0) && (root->left == NULL) && (root->right == NULL)){
            res.pb(path);
            path.pop_back();
            return;
        }else {
            generate(root->left, subSum, res, path);
            generate(root->right, subSum, res, path);
        }
        
        path.pop_back();
    }
};
