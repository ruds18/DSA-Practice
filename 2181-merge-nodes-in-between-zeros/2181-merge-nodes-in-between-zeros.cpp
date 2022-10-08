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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummyHead= new ListNode(-1);
        ListNode* dummyTail = dummyHead;
        ListNode* temp =head;
        temp = temp->next;
        int sum =0;
        
        while(temp){
            while(temp->val !=0){
                sum +=temp->val;
                temp=temp->next;
            }
            dummyTail->next = new ListNode(sum);
            dummyTail = dummyTail->next;
            temp=temp->next;
            sum =0;
        }
        return dummyHead->next;
    }
};