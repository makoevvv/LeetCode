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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr) {
            return true;
        } else if (head -> next == nullptr) {
            return true;
        }
        stack <int> st;
        ListNode *cur = head;
        int cnt = 0;
        while (cur != nullptr) {
            cur = cur -> next;
            cnt++;
        }
        int k = cnt / 2;
        for (int i = 0; i < k; i++) {
            st.push(head->val);
            head = head->next;
        }
        if (cnt % 2) {
            head = head -> next;
        }
        cout << st.top();
        for (int i = 0; i < k; i++) {
            if (st.top() != head->val) {
                return false;
            } else {
                st.pop();
                head = head->next;
            }
        }
        return true;
    }
};