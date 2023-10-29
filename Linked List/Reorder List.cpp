class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL)
        return NULL;

        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp)
        {
            ListNode* n = temp->next;
            temp->next = prev;
            prev = temp;
            temp = n;
        }
        return prev;
    }
    ListNode* merge(ListNode* head, ListNode* head1)
    {
        if(head1==NULL)
        return head;
        if(head==NULL)
        return head1;

        while(head1 && head)
        {
            ListNode* temp = head->next;
            head->next = head1;
            head1 = head1->next;
            head->next->next = temp;
            head = temp;
        }
        return head;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* head1 = slow->next;
        slow->next = NULL;
        ListNode* temp = head1;
        head1 = reverse(head1);
        temp = head1;
        head = merge(head,head1);
    }
};