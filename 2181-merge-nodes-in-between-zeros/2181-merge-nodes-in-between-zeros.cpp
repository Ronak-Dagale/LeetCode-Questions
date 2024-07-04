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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*ans=new ListNode(-1);
        ListNode*anstail=ans;
        
        head=head->next;
        while(head && head->val!=0)
        {
            int sum=0;
            while(head && head->val!=0)
            {
                sum+=head->val;
                head=head->next;
            }
            ListNode*newnode=new ListNode(sum);
            anstail->next=newnode;
            anstail=newnode;
            
            if(head)
                head=head->next;
        }
        return ans->next;
    }
};