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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        int sum=0,carry=0;
        
        while(l1 or l2 or carry)
        {
            // cout<<l1->val<<" "<<l2->val<<endl;
            
            if(l1)
            {
                sum+=l1->val;
                l1 = l1->next;
            }
             if(l2)
            {
                sum+=l2->val;
                l2 = l2->next;
            }
            
            sum+=carry;
            carry = sum/10;
            // cout<<"s="<<sum<<" carr="<<carry<<endl;
            ListNode* Node = new ListNode(sum%10);
            sum=0;
            temp->next = Node;
            temp = temp->next;
        }
        return dummy->next;
        
    }
};