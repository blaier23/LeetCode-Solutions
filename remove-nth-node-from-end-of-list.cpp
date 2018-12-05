// Given a linked list, remove the n-th node from the end of list and return its head.

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
            return head;
        
        ListNode* nAhead = head;
        ListNode* curr = head;
        
        for (int i = 0; i <= n; i++)
        {
            if(!nAhead)
                return head->next;
            nAhead = nAhead->next;
        }
           
        
        while (nAhead)
        {
            nAhead = nAhead->next;
            curr = curr->next;
        }
        
        curr->next = curr->next->next;
        
        return head;
    }
};
