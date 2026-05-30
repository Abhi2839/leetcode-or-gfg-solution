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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
             for (ListNode* list : lists) {  // to get each element of each list
            while (list) {
               ans.push_back(list->val);
                list = list->next;
            }
        }
        // ListNode temp=lists;
        // while(temp){
        //     ans.push_back(temp->val);
        //     temp=temp->next;
        // }
        sort(ans.begin(),ans.end());

        if (ans.empty())
        return nullptr;
        ListNode*new_node =new ListNode(ans[0]);
        ListNode*curr=new_node;
  
        for (int i=1;ans.size()>i;i++){
           curr->next=new ListNode(ans[i]);
           curr=curr->next;
        }
        return new_node;
    }
};