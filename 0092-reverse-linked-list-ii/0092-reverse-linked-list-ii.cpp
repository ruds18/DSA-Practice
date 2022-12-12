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
    ListNode* left;
    bool stop;
    
    void recurseAndReverse(ListNode* right, int m, int n){
        //base case
        if(n == 1){
            return ;
        }
        
        right = right->next;
        
        if(m>1){
            
        left = left->next;
        }
        
        recurseAndReverse(right, m - 1, n - 1);
        
        if(left == right || right->next == left){
            stop = true;
        }
        if(!stop){
            int t = left->val;
            left->val = right -> val;
            right->val = t;
            
            left = left->next;
        }
    }
    
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        left = head;
         stop = false;
        recurseAndReverse(head, m, n);
        return head;
    }
};