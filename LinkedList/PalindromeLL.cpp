class Solution {
public:
    
    bool isPalindrome(ListNode* head) {
        stack<ListNode*>st;
        ListNode* cur = head;
        
        // while loop to push all the cur data to the stack 
        while(cur!=NULL) {
            st.push(cur);
            cur = cur->next;
        }
        
        // reset cur to the head
        cur = head;
        
        // traverse the cur to the end and check if the stack popped nod eand cur are equal or not
        while(cur!=NULL && !st.empty()) {
            ListNode* popped = st.top();
            st.pop();
            if(cur->val != popped->val) {
                return false;
            }
            cur = cur->next;
        }
        return true;    
    }
    
};