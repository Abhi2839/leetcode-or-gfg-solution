class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        int len = 0;
        ListNode* temp = head;
        ListNode* tail = nullptr;
        while (temp) {
            len++;
            tail = temp;
            temp = temp->next;
        }
        k = k % len;
        if (k == 0)
            return head;
        ListNode* curr = head;
        for (int i = 1; i < len - k; i++) {
            curr = curr->next;
        }

        ListNode* ans = curr->next;
        curr->next = nullptr;
        tail->next = head;

        return ans;
    }
};
