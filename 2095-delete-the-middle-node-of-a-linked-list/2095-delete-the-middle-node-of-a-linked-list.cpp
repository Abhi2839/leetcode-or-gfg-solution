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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr or head->next == nullptr)
            return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = head;
        while (fast and fast->next) {
            prev = slow; // for the idx to be delete
            slow = slow->next;
            fast = fast->next->next;
            cout << prev->val << " ";
        }
        prev->next = slow->next;
        return head;
    }
};