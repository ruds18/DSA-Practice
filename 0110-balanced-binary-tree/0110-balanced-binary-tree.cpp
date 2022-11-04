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
public:
    int height(TreeNode* &root){
        //base case
        if(root == NULL) return 0;
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        return max(lh, rh) + 1;
    }
    bool isBalanced(TreeNode* root) {
        // lh + rh <=1 
        //edge case
      if(root == NULL) return true;
      
      bool left = isBalanced(root->left);
      bool right = isBalanced(root->right);
      bool diff = abs (height(root->left) - height(root->right)) <= 1 ;
      
     
       if(left && right && diff){
           return true ;
       }else{
           return false;
       }
      
        
    }
};