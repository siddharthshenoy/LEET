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
    bool isPalindrome(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* ptr = NULL;
        ListNode* next = NULL;
        while(slow != NULL)
        {
            next = slow->next;
            slow->next = ptr;
            ptr = slow;
            slow = next;
        }

        
        while(ptr != NULL)
        {
            if(head->val != ptr->val)
            {
                return false;
            }
            head = head->next;
            ptr = ptr->next;
        }
        return true;
    }
};