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
    ListNode* mergeToLists(ListNode* l1, ListNode*l2){
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        
        if(l1->val >= l2->val){
            l2->next = mergeToLists(l1, l2->next);
            return l2;
        }else{
            l1->next = mergeToLists(l1->next, l2);
            return l1;
        }
    }
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        while(lists.size()>1){
         // atleast two ll
            lists.push_back(mergeToLists(lists[0] , lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists.front();
    }
};