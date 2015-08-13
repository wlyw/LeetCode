/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        
        ListNode *l = NULL,*ln = NULL;
        int temp = 0;
        
        while(l1 && l2)
        {
            ListNode *next = new ListNode((l1->val + l2->val + temp) % 10);
            temp = ((l1->val + l2->val + temp) / 10);
            
            if(l == NULL)
            {
                l = ln = next;
            }
            else
            {
                ln->next = next;
                ln = next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1)
        {
            ListNode *next = new ListNode((l1->val + temp) % 10);
            temp = ((l1->val + temp) / 10);
            ln->next = next;
            ln = next;
            l1 = l1->next;
        }
        while(l2)
        {
            ListNode *next = new ListNode((l2->val + temp) % 10);
            temp = ((l2->val + temp) / 10);
            ln->next = next;
            ln = next;
            l2 = l2->next;
        }
        if(temp != 0)
        {
            ListNode *next = new ListNode(temp);
            ln->next = next;
        }
        return l;
    }
};