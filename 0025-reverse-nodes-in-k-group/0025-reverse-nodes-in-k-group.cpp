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
    ListNode* reverseKGroup(ListNode* head, int k) {

        vector<int> ans;
        ListNode* temp = head;
        while (temp) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int loop = ans.size() / k;
        for (int i = 0; loop > i; i++) {
            reverse(ans.begin() + k * i, ans.begin() + k + k * i);
        }
        temp = head;
        for (auto x : ans) {
            temp->val = x;
            temp = temp->next;
        }
        return head;
    }
};