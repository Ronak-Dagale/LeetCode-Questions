/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* root,int x)
    {
        if(root==NULL)
        {
            return 0;
        }
        x=x-root->val;
        bool l=solve(root->left,x);
        bool r=solve(root->right,x);
        
        if(l || r)
            return 1;
        
        if(root->left==NULL && root->right==NULL && x==0)
        { 
           return 1;
        }
        
        return 0;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans=solve(root,targetSum);
        return ans;
    }
};