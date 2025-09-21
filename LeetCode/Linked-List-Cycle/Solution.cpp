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
    bool hasCycle(ListNode* head) {
        //initialize pointers
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != nullptr && fast->next != nullptr) { //traverse linked list with pointers
            fast = fast->next->next; //move 2 steps
            slow = slow->next;// move 1 step
            if (fast == slow) { // check if they meet
                return true;
            }
        }
        return false; // no cycle
    }
};