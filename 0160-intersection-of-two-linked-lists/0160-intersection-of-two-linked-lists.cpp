/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curA = headA, *curB = headB;
        unordered_set <ListNode*> st;
        int lenA = 0, lenB = 0;
        while (curA != NULL) {
            st.insert(curA);
            curA = curA->next;
            lenA++;
        }
        bool flag = true;
        while (curB != NULL) {
            if (st.find(curB) != st.end()) {
                flag = false;
            }
            lenB++;
            curB = curB->next;
        }

        if (flag) {
            return NULL;
        }

        if (lenA > lenB) {
            swap(headA, headB);
            swap(lenA, lenB);
        }
        for (int i = 0; i < lenB - lenA; i++) {
            headB = headB->next;
        }
        for (int i = 0 ; i < lenA; i++) {
            if (headA == headB) {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};