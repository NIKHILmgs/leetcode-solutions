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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head or !head->next)
            return NULL;
        ListNode *f,*s,*t;
        t =f=s=head;
        while(f and f->next)
        {
            t = s;
            s=s->next;
            f = f->next->next;
        }
        t->next=s->next;
        s->next=nullptr;
        delete s;
        return head;
        
        
    }
};