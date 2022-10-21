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
class Solution 
{
public:
    ListNode* middleNode(ListNode* head) 
    {
        ListNode *turtle, *rabit;
        ListNode *startLine = head, *finisLine = NULL;
        turtle = rabit = startLine;
        
        while (rabit!=finisLine and rabit->next!=finisLine)
        {
            turtle = turtle->next;
            rabit = rabit->next->next;
        }
        
        return turtle;
    }
};