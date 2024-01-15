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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(-1);
        ListNode* anstail=ans;
        int sum=0;
        int temp=0;
        while(l1!=NULL || l2!=NULL)
        {
           if(l1!=NULL && l2!=NULL)
           {
               sum=l1->val+l2->val+temp;   
               l1=l1->next;
               l2=l2->next;
           }
            else if(l1!=NULL)
            {
                sum=l1->val+temp;  
                l1=l1->next;
            }
            else
            {
                sum=l2->val+temp;  
               l2=l2->next;
            }
            
            ListNode* node=new ListNode(sum%10);
            temp=sum/10;
            
            anstail->next=node;
            anstail=node;
        }
        
        if(temp!=0)
        {
             ListNode* node=new ListNode(temp);
             anstail->next=node;
            anstail=node;
        }
        return ans->next;
    }
};