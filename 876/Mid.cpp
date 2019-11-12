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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode* mid = head;
        ListNode* todo = head;
        
        while (todo != NULL && todo->next != NULL)
        {
            mid = mid->next;
            todo = todo->next->next;
        }
        return mid;
    }
};