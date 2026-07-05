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
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        int carry = 0;

        while(curr1 != NULL && curr2 != NULL){
            int sum = carry;
            if(curr1){
                sum += curr1->val;
            }
            if(curr2){
                sum += curr2->val;
            }
            ListNode* t = new ListNode(sum % 10);
            carry = sum / 10;
            temp->next = t;
            curr1 = curr1->next;
            curr2 = curr2->next;
            temp = temp->next;
        }
        if(curr1 != NULL){
            while(curr1 != NULL){
                //cout<<curr1->val<<", ";
                int sum = carry + curr1->val;
                ListNode* t = new ListNode(sum % 10);
                carry = sum / 10;
                temp->next = t;
                curr1 = curr1->next;
                temp = temp->next;
            }
        }
        if(curr2 != NULL){
            while(curr2 != NULL){
                int sum = carry + curr2->val;
                ListNode* t = new ListNode(sum % 10);
                carry = sum / 10;
                temp->next = t;
                curr2 = curr2->next;
                temp = temp->next;
            }
        }
        if(carry > 0){
            ListNode* t = new ListNode(carry);
            temp->next = t;
            temp = temp->next;
        }
        return dummy->next;
    }
};