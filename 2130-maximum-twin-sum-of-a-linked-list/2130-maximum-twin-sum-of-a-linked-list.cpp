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
    int pairSum(ListNode* head) {
         ListNode *slow,*fast,*prev,*temp;
        slow=fast=head;
        //finding the mid point
        while(fast and fast->next)
            slow = slow->next,fast=fast->next->next;
        //breaking the linked list
        prev = slow;
        slow=slow->next;
        prev->next=NULL;
        //reversing the second half
        while(slow)
            temp=slow->next,slow->next=prev,prev=slow,slow=temp;
        fast=head;slow=prev;
       int mx=-1;
        while(slow)
            mx=max(mx,(slow->val+fast->val)),
            // cout<<"mx= "<<mx<<"val= "<<slow->val+fast->val<<"\n",
            slow=slow->next,
            fast=fast->next;
        return mx;
        
    }
};