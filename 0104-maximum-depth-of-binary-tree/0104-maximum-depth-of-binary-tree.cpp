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
    void solve(TreeNode* root,int &ans,int h)
    {
        if(root==NULL)
        {
            ans=max(ans,h);
            return;
        }
        
        solve(root->left,ans,h+1);
        solve(root->right,ans,h+1);
    }
    int maxDepth(TreeNode* root) {
        int ans=0;
        solve(root,ans,0);
        return ans;
    }
};