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
    void solve(TreeNode* root,int &ans,int i,string temp)
    {
        if(root==NULL)
        {
            return;
        }
        
        temp.push_back(root->val+'0');
        
        solve(root->left,ans,i+1,temp);
        solve(root->right,ans,i+1,temp);
        
        if(root->left==NULL && root->right==NULL)
        {
           if(temp!="")
            ans=ans+stoi(temp);
        }
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        string temp="";
        solve(root,ans,0,temp);
        return ans;
    }
};