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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return NULL;
        if(!head->next)
            return head;
        ListNode *a=head;ListNode *b=head->next;
        ListNode *d=head->next;ListNode *m=head;
        int c=0;int n=0;
        while(a!=NULL)
        {
            n++;
            a=a->next;
        }
        a=head;
        if(n%2==0)
            n--;
        while(c<n/2)
        {
            if(a->next->next!=NULL)
            {
                a->next=a->next->next;
                a=a->next;
            }
            else
            {
                a->next=NULL;
            }
            if(b->next->next!=NULL)
            {
                b->next=b->next->next;
                b=b->next;
            }
            else
                b->next=NULL;
            c++;
        }
        a->next=d;
        return m;
            
        
    }
};
