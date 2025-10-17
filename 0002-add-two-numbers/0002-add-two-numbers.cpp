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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a = 0, b = 0;
        ListNode *A = l1, *B = l2; 
        while (A != nullptr) {
            a++;
            A = A->next;
        }
        while (B != nullptr) {
            b++;
            B = B->next;
        }
        if (a < b) {
            swap(l1, l2);
        } 
        ListNode *ans = l1;
        int k = 0;
        while (l2 != nullptr) {
            k += l1->val + l2->val;
            l1->val = k % 10;
            k /= 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != nullptr) {
            k += l1->val;
            l1->val = k%10;
            k /= 10;
            l1 = l1->next;
        }
        if (k) {
            ListNode *head = ans;
            while(head->next != nullptr) {
                head = head->next;
            }
            head->next = new ListNode(k);
        }

        return ans;
    }
};