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
    set<ListNode *>s;
    ListNode *a=headA;
    while(a!=NULL)
    {
        s.insert(a);
        a=a->next;
    }
    ListNode *b=headB;
    ListNode *p=NULL;
    while(b!=NULL)
    {
        if(s.find(b)!=s.end())
        {
            p=b;
            break;
        }
        b=b->next;
    }
    return p;
        
    }
};
