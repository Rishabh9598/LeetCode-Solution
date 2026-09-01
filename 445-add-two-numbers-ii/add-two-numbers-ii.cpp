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
        //ListNode* dummy = new dummy[NULL];
        stack<int> st1;
        stack<int> st2;

        ListNode* curr1 = l1;
        ListNode* curr2 = l2;

        while(curr1 != NULL){
            st1.push(curr1->val);
            curr1 = curr1->next;
        }
        while(curr2 != NULL){
            st2.push(curr2->val);
            curr2 = curr2->next;
        }

        int carry = 0;
        stack<int> st3;

        while(!st1.empty() || !st2.empty() || carry != 0){
            int c = 0;
            if(!st1.empty()){
                c += st1.top();
                st1.pop();
            }
            if(!st2.empty()){
                c += st2.top();
                st2.pop();
            }
            
            c += carry;
            int remain = c % 10;
            carry = c /10;

            st3.push(remain);
        }
        

        ListNode* dummy = new ListNode(0);
        curr1 = dummy;
        while(!st3.empty()){
            curr1->next = new ListNode(st3.top());
            st3.pop();
            curr1 = curr1->next;
        }
        return dummy->next;
    }
};