
class Solution {
    void reverse(ListNode* &head, ListNode* &cur, ListNode* &prev){
        //base case
        if(cur == NULL){
            head = prev;
            return;
        }
        ListNode* forward = cur->next;
        //recursive call
        reverse(head, forward,cur);
        cur->next=prev;
    }
public:
    ListNode* reverseList(ListNode* head) {
        //Using recursion
        ListNode* prev = NULL;
        ListNode* cur = head;
        reverse(head, cur, prev);
        return head;
    }
};