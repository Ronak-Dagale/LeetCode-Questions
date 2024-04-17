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
    void solve(TreeNode* root,string temp,vector<string>&v)
    {
        if(root==NULL)
        return;
        
        temp.push_back(root->val+'a');
        
        if(root->left==NULL && root->right==NULL)
        {
            reverse(temp.begin(),temp.end());
            v.push_back(temp);
        }
        solve(root->left,temp,v);
        solve(root->right,temp,v);
        
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string>v;
        string temp="";
        solve(root,temp,v);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        
        
        return v[0];
    }
};