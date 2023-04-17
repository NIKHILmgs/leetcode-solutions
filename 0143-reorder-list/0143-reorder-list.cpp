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
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL,*next = NULL,*curr = head;
        while(curr != NULL){
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr= next;
        }
        return pre;
    }
    void reorderList(ListNode* head) {
        if(head==NULL or head->next==NULL)
        {
            return;
        }
        ListNode* slow, *fast;
        slow=fast=head;
        // 1.find the middle element of LL
        while(fast->next and fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        // 2.Reverse the 2nd half of LL
        fast=reverseList(slow->next);
        slow->next=NULL;
        slow=head;
        // 3. Merge LL
        
        while(fast)
        {
            ListNode* temp = slow->next;
            slow->next = fast;
            fast = fast->next;
            slow->next->next=temp;
            slow = temp;
        }
    }
};