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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr) {
            return nullptr;
        } else if (head->next == nullptr) {
            return head;
        } else {
            int cnt = 0;
            ListNode * q = head;
            while (q != nullptr) {
                q = q->next;
                cnt++;
            }
            k %= cnt;
            for (int i = 0; i < k; i++) {
                ListNode * left = head, * right = head->next;
                while (right->next != nullptr) {
                    left = right;
                    right = right->next;
                }
                left->next = nullptr;
                right->next = head;
                head = right;
            }
        }
        return head;
    }
};