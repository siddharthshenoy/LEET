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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
        {
            return NULL;
        }
        else
        {
        ListNode *temp = NULL;
        ListNode *first =head->next;
        ListNode *slow = head;
        head->next=temp;
        while(first)
        {
            slow=first;
            first=first->next;
            slow->next=head;
            head=slow;
        }
        }
        return head;
    }
};