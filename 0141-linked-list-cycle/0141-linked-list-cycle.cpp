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
    bool hasCycle(ListNode *head) {
        // 0 or 1 Node only
        if(head == NULL || head->next == NULL) return false;
        
        // Atleast 2 or more Nodes
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(slow != fast){
           if(fast->next == NULL || fast->next->next == NULL) return false;
            slow = slow ->next;
            fast = fast->next->next;
        }
        return true;
    }
};