/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head){
    int res=0;
    int len=0;
    struct ListNode *temp=head;
    while(temp)
    {
        len++;
        temp=temp->next;
    }
    int p=len-1;
    while(head)
    {
        if(head->val==1)
        {
            res+=(1<<p);
        }
        head=head->next;
        p--;
    }
    return res;


}