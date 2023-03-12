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
    int len(ListNode *Node)
    {
        int l=0;
        while(Node)
        {
            l++;
            Node = Node->next;
        }
        return l;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !head->next)
            return head;
        int n = len(head);
        if(k%n==0 or k==0)
            return head;
        k%=n;
        ListNode* fast,*temp,*curr;
        fast=head;
        k=n-k-1;
        while(k--)
            fast=fast->next;
        
        temp = fast->next;
        fast->next=NULL;
        curr=temp;
        
        while(temp and temp->next)
            temp = temp->next;
        if(temp)
        temp->next=head;
        head = curr;
        return head;
        
        
        
    }
};