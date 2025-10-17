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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *cur = head;
        int s = 0;
        while (cur != nullptr) {
            s++;
            cur = cur->next;
        }
        if (n == s) {
            return head->next;
        }
        cur = head;
        for (int i = 0; i < s; i++) {
            if (i == s - n - 1) {
                if (cur->next != nullptr) {
                    cur->next = cur->next->next;
                }
            } else {
                cur = cur->next;
            }
        }
        return head;
    }
};