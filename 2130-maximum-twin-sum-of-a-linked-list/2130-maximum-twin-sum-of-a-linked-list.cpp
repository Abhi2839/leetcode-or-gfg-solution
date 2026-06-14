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
    int leng(ListNode* head) {
        int ans = 0;
        while (head) {
            head = head->next;
            ans++;
        }
        return ans;
    }

    ListNode* rev(ListNode* head) {
        ListNode* prev = nullptr;

        while (head) {
            ListNode* nextptr = head->next;
            head->next = prev;
            prev = head;
            head = nextptr;
        }

        return prev;
    }

    int pairSum(ListNode* head) {

        int len = leng(head);

        // find middle
        ListNode* slow = head;
        for (int i = 0; i < len / 2; i++) {
            slow = slow->next;
        }

        // reverse second half
        ListNode* head1 = rev(slow);

        int ans = 0;
        ListNode* head3 = head;

        while (head1) {
            ans = max(ans, head3->val + head1->val);

            head3 = head3->next;
            head1 = head1->next;
        }

        return ans;
    }
};

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     int leng(ListNode* head) {
//         int ans = 0;
//         while (head) {
//             head = head->next;
//             ans++;
//         }
//         return ans;
//     }
//     ListNode* rev(ListNode* head) {
//         ListNode* prev = nullptr;
//         // ListNode*curr=head;
//         while (head) {
//             ListNode* nextptr = head->next;
//             head->next = prev;
//             prev = head;

//             head = nextptr;
//             cout << prev->val << " ";
//         }
//         return prev;
//     }
//     int pairSum(ListNode* head) {
//         ListNode*head3=head;
//         ListNode* head1 = rev(head);
//         int ans = 0;
//         int len = leng(head1) / 2;
//         while (len--) {
//             int a=head3->val;
//             int b=head1->val;
//             ans = max(a+b,ans);
//             head3 = head3->next;
//             head1 = head1->next;
//         }
//         return ans;
//     }
// };