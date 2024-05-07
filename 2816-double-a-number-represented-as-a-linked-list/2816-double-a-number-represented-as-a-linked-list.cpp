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
    ListNode* reverse(ListNode*head)
    {
        ListNode* curr=head;
        ListNode* prev=NULL,*ne;
        
        while(curr)
        {
            ne=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ne;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode*temp1=reverse(head);
        
        ListNode*ans=new ListNode(-1);
        ListNode*anstail=ans;
        
        int c=0;
        while(temp1)
        {
            int x=temp1->val;
            x=x+x+c;
            ListNode*newnode=new ListNode(x%10);
             c=x/10; 
            
            anstail->next=newnode;
            anstail=newnode;
            
            temp1=temp1->next;
        }
        if(c!=0)
        {
            ListNode* newnode=new ListNode(c);
            anstail->next=newnode;
            anstail=newnode;
        }
        ListNode*re=reverse(ans->next);
        return re;
    }
};