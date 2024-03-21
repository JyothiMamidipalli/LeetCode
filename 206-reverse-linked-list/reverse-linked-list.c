/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *temp=NULL;
    struct ListNode *p1=head;
    while(p1)
    {
        struct ListNode *p2=p1->next;
        p1-> next=temp;
        temp=p1;
        p1=p2;
    }
    return temp;

}