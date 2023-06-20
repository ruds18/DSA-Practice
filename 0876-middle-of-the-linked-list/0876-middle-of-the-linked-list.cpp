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
    ListNode* middleNode(ListNode* head) {
        //base case
        if(!head || !head->next) return head;
        ListNode* fast = head->next;
        ListNode* slow = head;
        
        while(fast ){
            
            fast = fast->next;
            if(fast) fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};