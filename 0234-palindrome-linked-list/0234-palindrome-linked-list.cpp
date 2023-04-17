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
    // ListNode* temp;
    
    // bool check(ListNode* head) {
    //     if (NULL == head) return true;
    //     bool res = check(head->next) & (temp->val == head->val);
    //     temp = temp->next;
    //     return res;
    // } recursive sol
    
    bool isPalindrome(ListNode* head) {
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
        //checking if the reverse = other half
        while(slow)
            if(fast->val!=slow->val) return false;
            else fast=fast->next,slow=slow->next;
        return true;
        
    }
};