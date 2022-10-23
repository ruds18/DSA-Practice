/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
    int search(TreeNode* cur, int max){
        if(!cur) return 0;
        int cnt =0;
        if(cur->val >= max) {
            cnt++;
            max = cur->val;
        }
        
        cnt += search(cur->left , max);
        cnt += search(cur->right, max);
        
        return cnt;
    }
public:
    int goodNodes(TreeNode* root) {
      if(!root) return 0;
      if(!root->left && !root->right) return 1;
        
      int cnt =1; // Root always a good node
      cnt += search(root->left, root->val);
      cnt += search(root->right, root->val);
        
      return cnt;
    }
};