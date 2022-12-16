
class Solution {
    private:
    ListNode* getMid(ListNode* &head){
        //Hare tortoise approach
        ListNode* fast = head->next; // 2 Steps
        ListNode* slow = head; // 1 Step
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* cur = head;
        ListNode* prev = NULL;
        ListNode* nxt = NULL;
        
        while(cur){
            nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        //edge case
        if(head->next == NULL && head) return true;
        
        //Step 1 - Find the middle element
        ListNode* middle = getMid(head);
        
        //Step 2  - Reverse the other half of the array
        ListNode* temp = middle->next;
        middle->next = reverse(temp);
        
        //Step 3 - Compare both the halves
        ListNode* index1 = head;
        ListNode* index2 = middle->next;
        
        // always left part nodes number > right part nodes number 
        
        while(index2){
            if(index1->val != index2->val) return false;
            index1 = index1->next;
            index2 = index2->next;
            
        }
        return true;
    }
};