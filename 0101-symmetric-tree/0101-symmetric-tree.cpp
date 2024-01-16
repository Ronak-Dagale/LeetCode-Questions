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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
           int size=q.size();
            vector<int>v;
            while(size--)
            {
                TreeNode*front=q.front();
                q.pop();
                
                if(front->left!=NULL)
                {
                    v.push_back(front->left->val);
                    q.push(front->left);
                }
                else
                    v.push_back(-200);
                
                if(front->right!=NULL)
                {
                    v.push_back(front->right->val);
                    q.push(front->right);
                }
                else
                    v.push_back(-200);
            }
            
            int i=0,j=v.size()-1;
            while(i<j)
            {
                if(v[i]!=v[j])
                    return 0;
                
                i++;
                j--;
            }
        }
        return 1;
    }
};