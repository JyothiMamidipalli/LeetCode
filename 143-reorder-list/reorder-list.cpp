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
    typedef ListNode Node;
    void reorderList(ListNode* head) {
        if(head->next!=NULL and head->next->next!=NULL)
        {
            vector<Node*>jyo;
            Node* temp=head;
            while(temp!=NULL)
            {
                jyo.push_back(temp);
                temp=temp->next;
            }
            int a=jyo.size()-1;
            int b=jyo.size()/2;
            Node *t1=head;
            Node *t2=head->next;
            while(a>=b)
            {
                Node *temp1=jyo[a];
                t1->next=temp1;
                temp1->next=t2;
                t1=t2;
                t2=t2->next;
                a--;
            }
            t1->next->next=NULL;
        }
    }
};