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
    int pairSum(ListNode* head) {
        vector<int>nums;
        ListNode* temp =head;
        int ans = 0;
        while(temp){
            nums.push_back(temp->val);
            temp = temp->next;
        }
         int n = nums.size();
        for(int i=0; i<= ((n / 2) - 1 );i++){
            ans = max(ans,  (nums[i] + nums[n-i-1]));
        }
        return ans;
    }
};


/*
Concept

get the size

iterate till i<=n/2-1;
sum = i->val + n-i-1->val




*/