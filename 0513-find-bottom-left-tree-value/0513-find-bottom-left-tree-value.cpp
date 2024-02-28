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
    int findBottomLeftValue(TreeNode* root) {
        int ans=root->val;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int cnt=0;
            int size=q.size();
            while(size--)
            {
                TreeNode* front=q.front();
                q.pop();
    
                if(cnt==0)
                {
                  ans=front->val;
                    cnt++;
                }
                
                if(front->left!=NULL)
                    q.push(front->left);
                if(front->right!=NULL)
                    q.push(front->right);
            }
        }
        return ans;
    }
};