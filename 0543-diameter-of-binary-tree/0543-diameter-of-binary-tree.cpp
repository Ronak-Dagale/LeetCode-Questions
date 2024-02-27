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
    pair<int,int> solve(TreeNode* root)
    {
       if(!root)
       {
           pair<int,int>p={0,0};
           return p;
       }
        
        pair<int,int>le=solve(root->left);
        pair<int,int>ri=solve(root->right);
        
        int op1=le.first;
        int op2=ri.first;
        int op3=le.second+ri.second+1;
        
        int di=max(op1,max(op2,op3));
        int hi=max(le.second,ri.second)+1;
        return {di,hi};
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return solve(root).first-1;
    }
};