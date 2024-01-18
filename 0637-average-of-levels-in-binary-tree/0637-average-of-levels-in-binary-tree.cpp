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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
          double temp=0;
            int size=q.size();
            int n=size;
            while(size--)
            {
                TreeNode* front=q.front();
                q.pop();
                
                temp=temp+front->val;
                
                if(front->left)
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
            }
            temp=temp/n;
            ans.push_back(temp);
        }
        return ans;
    }
};