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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL;
        ListNode* ans = head;
        int size=1;
        while(head->next){ 
            head=head->next;
            size++;
        }
        head->next=ans;
        k=k%size;
        k=size-k;
        while(--k>0){
            ans=ans->next;
        }
        head = ans;
        ans=ans->next;
        head->next=NULL;
        return ans;
    }
};