
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* forward = NULL;
        
        while(cur != NULL){
            forward = cur->next;
            cur->next = prev;
            prev= cur;
            cur = forward;
        }
        return prev;
    }
};