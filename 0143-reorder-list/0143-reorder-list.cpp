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
    void reorderList(ListNode* head) {
        if (!head) return;
        ListNode*full,*half,*prev=NULL,*ne;
        full=head;
        half=head;
        
        while(full->next && full->next->next)
        {
            full=full->next->next;
            half=half->next;
        }
        
        if(full->next)
            half=half->next;
        
        while(half)
        {
            ne=half->next;
            half->next=prev;
            prev=half;
            half=ne;
        }
        
        half=prev;
        
        while(head && half)
        {
            full=head->next;
            prev=half->next;
            head->next=half;
            half->next=full;
            head=full;
            half=prev;
        }
        if (head && head->next) head->next->next = NULL;
    }
};