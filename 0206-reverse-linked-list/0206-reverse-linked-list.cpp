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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* fwd = NULL;
        
        while(cur!=NULL){
            fwd = cur->next;
            cur->next = prev;
            prev = cur;
            cur = fwd;
        }
        
        return prev;
    }
};