/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        map<int,int>mp;
        ListNode*temp=head;
        
        while(temp)
        {
          mp[temp->val]++;
            temp=temp->next;
        } 
        
        temp=head;
        ListNode*ans=new ListNode(-1);
        ListNode*anstail=ans;
        
        while(temp)
        {
           if(mp.upper_bound(temp->val)==mp.end())
           {
               anstail->next=temp;
               anstail=temp;
           }
            mp[temp->val]--;
            if(mp[temp->val]==0)
                mp.erase(temp->val);
            
            temp=temp->next;
        }
        return ans->next;
        
        
    }
};