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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode*newnode=new TreeNode(val);
            newnode->left=root;
            return newnode;
        }
        
         queue<TreeNode*>q;
         q.push(root);
        
         while(!q.empty() && depth--)
         {
            int size=q.size();
             
             while(size--)
             {
                 if(depth==1)
                 {
                   TreeNode*newnodel=new TreeNode(val);
                   TreeNode*newnoder=new TreeNode(val);
                     
                   TreeNode*front=q.front();
                     q.pop();
                     
                    newnodel->left=front->left;
                    newnoder->right=front->right;
                     front->left=newnodel;
                     front->right=newnoder;
                 }
                 else
                 {
                    TreeNode*front=q.front();
                     q.pop();
                     
                     if(front->left)
                         q.push(front->left);
                     if(front->right)
                         q.push(front->right);
                 }
             }
         }
        return root;
    }
};