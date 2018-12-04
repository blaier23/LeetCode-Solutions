// Given a sorted linked list, delete all duplicates such that each element appear only once.

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* result = head;
        
        while (head && head->next)
        {
            if (head->val == head->next->val)
                head->next = head->next->next;
            else
                head = head->next;
        }
        
        return result;
    }
};
