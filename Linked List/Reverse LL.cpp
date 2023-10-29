class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        return NULL;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp!=NULL)
        {
            ListNode* n = temp->next;
            temp->next = prev;
            prev = temp;
            temp = n;
        }
        return prev;
    }
};