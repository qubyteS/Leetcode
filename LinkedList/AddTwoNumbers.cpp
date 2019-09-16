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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        //check for the base cases
        if(!l1) return l2;
        if(!l2) return l1;
        
        if(!l1 && !l2) return NULL;
        
        int carry = 0;
        int sum = 0;
        
        ListNode* newHead = new ListNode(-1);
        ListNode* prev = newHead;
        
        while(l1 || l2 || carry) {
            int num_l1 = (l1)? l1->val : 0;
            int num_l2 = (l2)? l2->val : 0;
            sum = num_l1+num_l2+carry;
            carry = sum/10;
            
            prev->next = new ListNode(sum%10);
            prev = prev->next;
            
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        
        prev = newHead->next;
        delete newHead;
        return prev;
    }
};