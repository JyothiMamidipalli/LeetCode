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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *t1 = headA;
    ListNode *t2 = headB;
    int l = 0 ,l1 = 0;
    while(t1!=NULL)
    {
        l++;
        t1 = t1 -> next;
    }
    while(t2!=NULL)
    {
        l1++;
        t2 = t2 -> next;
    }
    int a = abs(l-l1);
    while(a!=0)
    {
        if(l > l1)
        {
            headA = headA->next;
        }
        else if(l < l1)
        {
            headB = headB->next;
        }
        a--;
    }
    while(headA!=NULL)
    {
        if(headA == headB)
        {
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
    }
};