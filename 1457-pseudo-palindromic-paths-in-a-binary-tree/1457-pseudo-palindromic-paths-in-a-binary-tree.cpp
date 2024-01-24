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
    bool chk(vector<int>&v)
    {
        int cnt=0;
        for(int i=1;i<10;i++)
        {
            if(v[i]%2!=0) cnt++;
        }
        
        if(cnt>1) return 0;
        return 1;
    }
    void solve(TreeNode* root,vector<int>&v,int &ans)
    {
        if(root==NULL)
        {
            return;
        }
        
       v[root->val]++;
        solve(root->left,v,ans);;
        solve(root->right,v,ans);
        
        if(root->right==NULL && root->left==NULL)
        {
            if(chk(v))
                ans++;
        }
         v[root->val]--;
        
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>v(10,0);
        int ans=0;
        solve(root,v,ans);
        return ans;
    }
};