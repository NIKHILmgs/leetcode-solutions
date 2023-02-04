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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        int f=0,c=0;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                f=1;
                break;
            }
        }
        if(!f)
            return NULL;
        if(f)
        {
            
            do{
                 fast = fast->next;
                  c++;
            }
            while(slow!=fast);
        }
        // cout<<c<<" ";
        slow = fast = head;
        while(c)
        {
            fast= fast->next;
            c--;
        }
         while(slow!=fast)
         {
             fast = fast->next;
             slow = slow->next;
         }
        return slow;
        
        
        
    }
};