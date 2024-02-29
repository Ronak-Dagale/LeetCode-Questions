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
    bool isEvenOddTree(TreeNode* root) {
        int level=0;
        queue<TreeNode*>q;
        q.push(root);
           int odd=-1;
          int even=-1;
        
        while(!q.empty())
        {
          int size=q.size();
            int chk=0;
            if(level&1)
            {
                chk=INT_MAX;
            }
            else
            {
                chk=INT_MIN;
            }
            
             while(size--)
             {
                 TreeNode* front=q.front();
                   q.pop();
                 
                 int val=front->val;
                   if(level&1)
                   {
                      if(val%2==0 && val<chk)
                          chk=val;
                       else 
                           return 0;
                   }
                 else
                 {
                     if(val&1 && val>chk)
                         chk=val;
                     else  
                         return 0;
                 }
                 
                 if(front->left)
                     q.push(front->left);
                 if(front->right)
                     q.push(front->right);
             }
              level++;
            
        }
        return 1;
    }
};