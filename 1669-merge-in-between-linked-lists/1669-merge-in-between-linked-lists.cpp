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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*tail2=list2;
        
        while(tail2->next)
        {
            tail2=tail2->next;
        }
        
        ListNode* t1,*t2;
        int cnt=0;
        ListNode* t=list1;
        
        while(t)
        {
            cnt++;
            if(cnt==a)
            {
                t1=t;
            }
            if(cnt==b+1)
            {
                t2=t;
                break;
            }
            t=t->next;
        }
        t1->next=list2;
        tail2->next=t2->next;
        return list1;
    }
};