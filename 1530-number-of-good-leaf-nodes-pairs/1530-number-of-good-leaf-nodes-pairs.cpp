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
    vector<int> solve(TreeNode* root, int d,int &ans)
    {
        if(!root) return {};
        
        if(!root->left && !root->right)
            return {1};
        
        vector<int>le=solve(root->left,d,ans);
        vector<int>ri=solve(root->right,d,ans);
        vector<int>re(le.size()+ri.size());
        
        int i=le.size()-1,j=0;
        for(;i>=0;i--)
        {
            while(j<ri.size() && le[i]+ri[j]<=d)
                j++;
            
            ans+=j;
        }
        
        i=0,j=0;
        int k=0;
        
        while(i<le.size() && j<ri.size())
        {
            if(le[i]<ri[j])
                re[k++]=le[i++]+1;
            else
                re[k++]=ri[j++]+1;
        }
        while(i<le.size())
            re[k++]=le[i++]+1;
        
        while(j<ri.size())
            re[k++]=ri[j++]+1;
        
        return re;
    }
    int countPairs(TreeNode* root, int distance) {
        int ans=0;
        solve(root,distance,ans);
        return ans;
    }
};