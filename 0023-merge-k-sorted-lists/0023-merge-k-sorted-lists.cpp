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

    ListNode* mergeLists (ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        } else if (list2 == nullptr) {
            return list1;
        }
        ListNode *head;
        if (list1->val < list2->val) {
            head = list1;
            list1 = list1->next;
        } else {
            head = list2;
            list2 = list2->next;
        }
        ListNode *cur = head;
        while (list1 != nullptr || list2 != nullptr) {
            if (list1 != nullptr && list2 != nullptr) {
                if (list1->val < list2->val) {
                    cur->next = list1;
                    list1 = list1->next;
                } else {
                    cur->next = list2;
                    list2 = list2->next;
                }
                cur = cur->next;
                cur->next = nullptr;
            } else {
                if (list1 != nullptr) {
                    cur->next = list1;
                    list1 = list1->next;
                    cur = cur->next;
                    cur->next = nullptr;
                } else if (list2 != nullptr) {
                    cur->next = list2;
                    list2 = list2->next;
                    cur = cur->next;
                    cur->next = nullptr;
                }
            }
        }
        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) {
            return nullptr;
        } else {
            ListNode* head = lists[0];
            for (int i = 1; i < lists.size(); i++) {
                head = mergeLists(head, lists[i]);
            }
            return head;
        } 
    }
};