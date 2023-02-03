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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return NULL;
        if(!head->next)
            return head;
        
        ListNode* temp = head;ListNode* temp2 = NULL;
       
            if(temp->next->val==head->val)
            {
                while(temp and temp->next and temp->val == temp->next->val)
                {
                  int v = temp->val;
                    while(temp and temp->val == v)
                        temp = temp->next;
                }
            }
         head = temp;
        
        while(temp)
        {
            
            if(temp->next and temp->val == temp->next->val)
            {
                int v = temp->val;
                    while(temp and temp->val == v)
                        temp = temp->next;
                temp2->next=temp;
            }
            else
            {
                temp2 = temp;
                temp=temp->next;
            }
        }
            

    return head;
        
        
    }
};