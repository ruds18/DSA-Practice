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
        ListNode* dummyHead = new ListNode(-1);
        ListNode* dummyTail = dummyHead;
        int carry =0 , digit =0;
        
        while(l1 || l2  ){
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            
            
            int sum = x + y + carry ;
            digit = sum%10;
            carry = sum/10;
            
            dummyTail->next = new ListNode(digit);
            dummyTail = dummyTail->next;
            
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        if(carry !=0){
            dummyTail->next = new ListNode(carry);
            dummyTail = dummyTail->next;
        }
        return dummyHead->next;
    }
};