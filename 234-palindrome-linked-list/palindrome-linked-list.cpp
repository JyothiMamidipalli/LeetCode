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
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        //reverse logic
        ListNode *temp=NULL;
        while(slow)
        {
            struct ListNode *p2=slow->next;
            slow->next=temp;
            temp=slow;
            slow=p2;
        }
        while(temp)
        {
            if(temp->val!=head->val) return 0;
            temp=temp->next;
            head=head->next;
        }
        return 1;
    }
};