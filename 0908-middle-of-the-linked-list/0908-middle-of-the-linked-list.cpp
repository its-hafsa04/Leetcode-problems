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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp1=head;
        ListNode* temp2=head;
        int count=0;
        while(temp1!=NULL){
            temp1=temp1->next;
            count++;
        }
        int mid;
        mid=count/2;
        int cn=0;
        while(temp2!=NULL){
            if(cn!=mid)
            temp2=temp2->next;
            else
            break;
            cn++;
        }
        return temp2;
    }
};