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
int count(string s)
{
    int p=0;
    int n=s.size();
    int c=0;
    int i;
    for(i=n-1;i>=0;i--)
    {
        c+=((s[i]-48)*pow(2,p));
        p++;
    }
    return c;
}
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s;
        while(head!=NULL)
        {
            if(head->val==1)
                s+=49;
            else
                s+=48;
            head=head->next;
        }
        return count(s);
        
    }
};
