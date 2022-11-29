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
        ListNode* cur = head;
        ListNode* nxt = head->next;
        
        while(nxt){
            if(nxt->val != 0){
                cur->val += nxt->val;
            }else{
                if(nxt->next == NULL){
                    cur->next = NULL;
                }else{
                        cur->next = nxt;
                        cur=nxt;
                }
            }
            
            nxt = nxt->next;
        
        }
        return head;
    }
};