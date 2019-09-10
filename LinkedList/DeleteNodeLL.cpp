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
    void deleteNode(ListNode* node) {
        
        // ATQ : we have no detail except for the node to be deleted
        // Using this node, we can only access the elements forward to it.
        // Moreover the node can never be the tail
        // So we are sure that there wil;l be atleast one node to the next of it
        
        node->val = node->next->val;
        node->next = node->next->next;
        
    }
};