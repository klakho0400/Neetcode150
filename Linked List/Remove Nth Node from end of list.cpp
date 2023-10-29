class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
   if (head->next == NULL) {
            return NULL;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        while(n>0)
        {
            n--;
            fast=fast->next;
        }
        if(fast==NULL)
        return slow->next;

        while(fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete(temp);

        return head;
    }
};