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
    
    ListNode* mergeNodes(ListNode* head) {
        ListNode* zero = head;
        ListNode* cur = head->next;
        int sum = 0;
        while (cur) {
            if (cur->val == 0) {
                zero->val = sum;
                sum = 0;
                if (cur->next) {
                    zero->next = cur;
                    zero = cur;
                    cur = cur->next;
                } else {
                    zero->next = nullptr;
                    break;
                }
                
            } else {
                sum += cur->val;
                cur = cur->next;
            }
        }
        return head;
    }
};