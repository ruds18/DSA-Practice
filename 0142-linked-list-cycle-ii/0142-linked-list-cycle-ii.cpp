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
    ListNode *detectCycle(ListNode *head) {
        
        //corner case
        if(head == NULL || head->next == NULL) return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;
        
       while(fast && fast->next){
           fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                isCycle = true;
                break;
            }
        }
        
        if(isCycle){
            slow = head;
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
            }
        }else {
            return NULL;
        }
        
        return slow;
    }
};