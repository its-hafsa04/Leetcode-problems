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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // check if empty list
        if (list1 == NULL) {
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }

        ListNode* p = list1; // Initialize the head of list
        if (list1->val > list2->val) {
            p = list2;
            list2 = list2->next;
        } else {
            list1 = list1->next;
        }

        ListNode* cur = p;

        while (list1 && list2) { // Iterate both lists until reach the end of one
            if (list1->val < list2->val) {
                cur->next = list1;
                list1 = list1->next;
            } else {
                cur->next = list2;
                list2 = list2->next;
            }
            cur = cur->next;
        }

        if (!list1) { // Attach remaining nodes of non-empty list
            cur->next = list2;
        } else {
            cur->next = list1;
        }

        return p; // return head of list
    }
};