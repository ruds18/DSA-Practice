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
    
    int getLeft(TreeNode* root){
        TreeNode* temp = root;
        int lc=0;
        
        while(temp) {
            temp = temp->left;
            lc++;
        }
        return lc;
    }
    
    int getRight(TreeNode* root){
        TreeNode* temp  = root;
        int rc=0;
        while(temp){
            temp = temp->right;
             rc++;
        }
        return rc;
    }
    
    
    int countNodes(TreeNode* root) {
      if(root == NULL) return 0;
        
        int left = getLeft(root);
        int right = getRight(root);
        
        if(left == right) return (pow(2,right)-1);
        
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};