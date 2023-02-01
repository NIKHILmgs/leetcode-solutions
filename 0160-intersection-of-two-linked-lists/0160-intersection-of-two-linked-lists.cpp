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
        unordered_map<ListNode*,int>mp;
        ListNode* node = headA;
        while(node)
        {
            mp[node]++;
            node=node->next;
        }
        node = headB;
        while(node)
        {
            if(mp.find(node)!=mp.end())
                return node;
            node = node->next;
        }
        
        return nullptr;
    }
};